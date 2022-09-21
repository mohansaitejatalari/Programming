

/* leap year is either divisible (by 400) or (by 4 but not 100) */
#include<iostream>
using namespace std;

int main(){
    int year;
    cin>>year;
    if(!(year%400)){
        cout<<"Leap Year"<<endl;
    }
    else if (!(year%4)and(year%100))
    {
        cout<<"Leap Year"<<endl;
    }
    else{
        cout<<"Non Leap Year"<<endl;
    }
    
    return 0;
}