#include<iostream>
using namespace std;

int reverse(int n){
    int res=0;
    while(n>0){
        res*=10;
        res+=n%10;
        n/=10;
    }
    return res;
}

int main(){

    int num;
    cin>>num;

    num==reverse(num)?cout<<"Palindrome":cout<<"Non palindrome"<<endl;
    return 0;

}