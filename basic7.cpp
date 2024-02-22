// Write a code a check whether a given number is divisible by 10 or not.

Solution:
#include<iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    if (number % 10 == 0) {
        cout << "The Number is divisible by 10";
    } else {
        cout << "The Number is not divisible by 10";
    }
    return 0;
}

Input1: 20
Output1: The Number is divisible by 10
Input2: 15
Output2: The Number is not divisible by 10

  // Write a code a check whether a given number is even or odd or neither(0).

Solution:
#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    // Outer If condition
    if (number != 0) {
        // Nested If condition, checking the divisibility of the number by 2.
        if ((number % 2) == 0) {
            cout << "The number is even.\n";
        }
        else {
            cout << "The number is odd.\n";
        }
    }
    // Outer Else condition
    else {
        cout << "The number is neither even nor odd.\n";
    }
    return 0;
}

Input1: 5
Output1: The number is odd.
Input2: 0
Output2: The number is neither even nor odd.
Input3: 24
Output3: The number is even.
