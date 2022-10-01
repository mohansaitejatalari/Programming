#include<iostream>
using namespace std;

int power(int x, int y){

    int temp=1;
    for(int i=1;i<=y;i++) temp *=x;
    return temp;
}

int main(){

    int num,len=0;
    cin>>num;
    int n = num;

    while(n){
        len+=1;
        n/=10;
    }
    
    n = num;
    int res=0;

    while(n){
        res = res + power((n%10),len);
        n/=10;
    }
    num==res?cout<<"Armstrong":cout<<"Non Armstrong"<<endl;
    return 0;
}