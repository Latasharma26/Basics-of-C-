// WAP to find x to power n
#include<iostream>
using namespace std;
int main(){
    int x,n;
    cin>>x>>n;
    int ans=1;
    if(n==0){
        ans=1;
    }
    else if(n==1){
        ans=0;
    }
    else{
        int i=1;
        while(i<=n){
            ans*=x;
            i++;
        }
    }
    cout<<ans;
    return 0;
}