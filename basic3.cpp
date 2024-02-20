// calculate total salary of a person 
// total salary = basic + hra+ da+ allow - pf
// hra= 20%of basic
// da= 50%of basic
// allow= 1700 is grade = A
// allow= 1500 is grade = A
// allow= 1300 is grade = A
//pf = 11% of basic
#include<iostream>
using namespace std;
int main()
{
    int basic;
    char grade;
    cin>>basic>>grade;
    int allow;
    double hra, da,pf;
    if(grade==65){
        allow=1700;
    }
    else  if (grade == 60) {
    
                allow=1500;
    }
    else
    {
        allow=1300;
    }
    hra=0.2*basic;
    da=0.5*basic;
    pf=0.11*basic;
    int totalsalary = (basic+hra+da+allow-pf);
    cout<<totalsalary;
    return 0;
    
}