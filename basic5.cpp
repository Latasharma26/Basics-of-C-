Cout
 

The C++ cout is used to produce output on the standard output device, usually the display screen or console. 
cout is a pre-defined variable that displays some output or text using the insertion operator(<<).

Example:

cout << “Hello World!”;
Output: Hello World!
 

endl: It is used to insert a new line character.
To print the variable value, the syntax is as followed 
cout << Variable_name;

#include<iostream>
#include<string>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    cout << s;
    return 0;
}




Input: Hello world
Output: Hello world
