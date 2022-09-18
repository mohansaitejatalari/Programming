#include<iostream>
using namespace std;

int main(){

int low, high,sum;
cin>>low>>high;

/* sum = (high*(high+1))/2 - (low*(low+1))/2+ low;  */

for(int i=low;i<=high;i++){
    sum += i;
}

cout<<sum;
    return 0;
}