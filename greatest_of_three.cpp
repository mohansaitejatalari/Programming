#include<iostream>
using namespace std;

int main(){

    int a,b,c;
    cin>>a>>b>>c;

    int max=0;
    max = (a>b)?(a>c?a:c):(b>c?b:c);
    cout<<max;
    return 0;
}