
/* Prime number has no other factors than 1 and itself. 

    Approaches:

        1. iterate from 2 to i for factors.
        2. optimize iterations to n/2 (no number greater than n/2 will be a factor of n)
        3. optimize iterations to sqrt(n)
        4. check if 2 is a factor , then iterate from 3 to n/2 skipping check for even factors.
            (if at all an even factor exists for n, it is obviously divisible by 2)



*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n==2){
        cout<<"Prime"<<endl;
        return 0;
    }
    if((n%2)==0){
        cout<<"Non Prime"<<endl;
    }
    else{
        int flag = 0;
        for(int i=3 ; i<=n/2 ; i+=2){
            if(n%i==0){
                flag = 1;
                break;
            }
        }
        flag?cout<<"Non Prime":cout<<"Prime";
    }
    return 0;
}