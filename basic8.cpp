 // Jump Statements: Jump statements are used to manipulate the flow of the program if some conditions are met. It is used to terminate or continue the loop inside a program or to stop the execution of a function. There are four types of jump statements in C++. They are as follows:

break
continue
goto
return
1) break statement: In C++, when encountered, the break statement terminates the loop or switch statement, and control returns from the loop or switch statement immediately to the first statement after the loop.
Syntax:

break;

Example: Check if an array contains any negative value.

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 6, 0, -3, 3, -2, 1};
    int size = 7; // No of elements in array
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            // Array contains a negative value, so break the loop
            cout << "Array contains negative value.";
            break;
        }
    }
}


Output:
Array contains negative value.
 

2) continue statement: In C++, the continue statement is used to skip the current iteration of the loop, and the control of the program goes to the next iteration.

Syntax:

 

continue;
 

Example: Print all non-negative values in an array.

 

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 6, 0, -3, 3, -2, 1};
    int size = 7; // no of elements in array
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            // If arr[i] < 0, then skip the current iteration i.e no statements following
            // continue will be executed.
            continue;
        }
        cout<<arr[i]<<" ";
    }
}

Output:
5 6 0 3 1
 
 

3) goto statement: In C++ programming, the goto statement is used to alter the normal sequence of program execution by transferring control to some other part of the program. The goto statement can be used to jump from anywhere to anywhere within a function.

 

Syntax1:

 

goto label;
.            
.           
.            
label:  
 

Example: Check if a number is even or not and print accordingly using the goto statement.

 

#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;
    if (number % 2 == 0)
        goto printeven;
    else
        goto printodd;

printeven:
    cout << "Even number";
    return 0;

printodd:
    cout << "Odd number";
    return 0;
}


Input1:
5
Ouptut1:
Odd number

Input2:
4
Output2:
Even number
 

 

Syntax2:

 

label:  
.            
.          
.      
goto label;
 

Example: Print numbers from 1 to 5 using goto statements.

 

#include <iostream>
using namespace std;

int main()
{
    int num = 1;
print:
    cout<<num<<" ";
    num++;
    if(num<=5)
        goto print;
    
    return 0;
}

Output:
1 2 3 4 5
 

Disadvantages of using goto Statement:
The goto statement gives the power to jump to any part of the program but makes the program’s logic complex and tangled.
In modern programming, goto statement is considered a harmful construct and a bad programming practice.
The goto statement can be replaced in most C++ programs using break and continue statements.
4) return statement: The return statement is used to terminate a function’s execution and transfer program control back to the calling function. It can also specify a value to be returned by the function. A function may contain one or more return statements. 

 

Syntax:

 

return [expression];
 

Example:

 

#include <iostream>
using namespace std;

// int return type function to calculate sum 
int SUM(int a, int b) {
    int s1 = a + b;
    return s1;
}

// void returns type function to print 
void Print(int s2) {
    cout << "The sum is " << s2;
    return;
}

int main() {
    int n1 = 10;
    int n2 = 20;
    int summ = SUM(n1, n2);
    Print(summ);
    return 0;
}


Output:
The sum is 30
