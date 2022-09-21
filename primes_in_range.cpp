
#include<iostream>
#include<vector>
using namespace std;

bool Prime(int x){

    if((x<2) ||(x>2 and x%2==0)) return false;

    else if(x==2) return true;
    
    else{
        for( int i =3; i<=x/2; i++){
            if(x%i==0) return false;
        }
        return true;
    }
}
int main(){
    int low, high;
    cin>>low>>high;
    vector<int>v;
    for(int i = low; i<=high; i++){
        if(Prime(i)){
            v.push_back(i);
        }
    }
    for(auto x: v) cout<<x<<" ";
    return 0;
}