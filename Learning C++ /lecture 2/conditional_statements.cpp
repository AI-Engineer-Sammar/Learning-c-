#include <iostream> // boiler plate code for C++ program
using namespace std;
int main() {
    // conditional statements are used to perform different actions based on different conditions. They allow the program to make decisions and execute specific blocks of code depending on whether a condition is true or false. The most common conditional statements in C++ are if, else if, and else. These statements can be nested and combined to create complex decision-making structures. It is important to understand how to use conditional statements effectively to control the flow of a program and handle various scenarios.
    int num; // declaring an integer variable
    cout << "Enter an integer: "; // prompting user for input
    cin >> num; // reading user input
    // if statement
    if (num > 0) { // checking if the number is positive
        cout << "The number is positive." << endl; // output if condition is true
    }
    // else if statement
    else if (num < 0) { // checking if the number is negative
        cout << "The number is negative." << endl; // output if condition is true
    }
    // else statement
    else { // executed if all previous conditions are false
        cout << "The number is zero." << endl; // output if condition is true
    }
    return 0;
    // Match case statements are used to perform different actions based on different conditions. They allow the program to make decisions and execute specific blocks of code depending on the value of a variable or expression. The most common match case statement in C++ is the switch statement. This statement can be used to compare a variable or expression against multiple possible values and execute the corresponding block of code for the matching case. It is important to understand how to use match case statements effectively to control the flow of a program and handle various scenarios.

}