// WAP to sum all odd no and sum all even no
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int evensum=0;
    int oddsum=0;
    int temp=n;
    while(temp){
        int lastdight=temp%10;
        if(lastdight % 2==0){
            evensum += lastdight;
        }
        else{
            oddsum += lastdight;
        }
    temp=temp/10;
    }
cout<<evensum<<" "<< oddsum;
return 0;

}