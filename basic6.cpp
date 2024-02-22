// Take the length(L) and breadth(B) of the rectangle as input and find its area.

#include <iostream>
using namespace std;

int main() {
    //Write your code here
int length,breadth,area;
cin>>length;
cin>>breadth;
area=length*breadth;
cout<<area;

return 0;
}

// Take the person's name and age as input and print out the name and age as specified in the output format.
#include <iostream>
using namespace std;

int main() {
string name;
int age;
cin>>name;
cin>>age;
cout<<"The name of the person is "<<name<<" and the age is "<<age<<".";    
return 0;
}

// You are given two numbers 'a' and 'b' as input.
// You must swap the values of 'a' and 'b'.

void swapNumber(int &a, int &b) {
    swap (a,b);
}
