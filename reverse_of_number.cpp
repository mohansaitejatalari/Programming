#include<iostream>
using namespace std;

int main(){

    int num,rev=0;
    cin>>num;

    while(num>0){
        rev*=10;
        rev+=num%10;
        num/=10;
    }
    cout<<rev;
    return 0;

}