#include <iostream> // boiler plate code for C++ program
using namespace std;

int main() {
    // operators are special symbols in C++ that perform specific operations on one or more operands. They can be classified into several categories, including arithmetic operators, relational operators, logical operators, bitwise operators, assignment operators, and more. Each operator has a specific function and can be used to manipulate data in different ways. It is important to understand the behavior of each operator and how they interact with different data types to write effective and efficient C++ programs.
    int a = 10; // declaring an integer variable
    int b = 5; // declaring another integer variable
    // arithmetic operators
    cout << "a + b = " << a + b << endl; // addition
    cout << "a - b = " << a - b << endl; // subtraction
    cout << "a * b = " << a * b << endl; // multiplication  
    cout << "a / b = " << a / b << endl; // division
    cout << "a % b = " << a % b << endl; // modulus
    // logical operators
    cout << "a > b = " << (a > b) << endl; // greater than
    cout << "a < b = " << (a < b) << endl; // less than
    cout << "a >= b = " << (a >= b) << endl; // greater than or equal to
    cout << "a <= b = " << (a <= b) << endl; // less than or equal to
    cout << "a == b = " << (a == b) << endl; // equal to
    cout << "a != b = " << (a != b) << endl; // not equal to
    // Bitwise operators
    cout << "a & b = " << (a & b) << endl; // bitwise AND
    cout << "a | b = " << (a | b) << endl; // bitwise OR
    cout << "a ^ b = " << (a ^ b) << endl; // bitwise XOR
    cout << "~a = " << (~a) << endl; // bitwise NOT
    cout << "a << 1 = " << (a << 1) << endl; // left shift
    cout << "a >> 1 = " << (a >> 1) << endl; // right shift
    // Assignment operators
    a += b; // equivalent to a = a + b
    cout << "a += b: " << a << endl; // output: 15
    a -= b; // equivalent to a = a - b
    cout << "a -= b: " << a << endl; // output: 10
    a *= b; // equivalent to a = a * b
    cout << "a *= b: " << a << endl; // output: 50
    a /= b; // equivalent to a = a / b
    cout << "a /= b: " << a << endl; // output: 10
    // Unary operators
    int c = 5; // declaring an integer variable
    cout << "c = " << c << endl; // output: 5
    cout << "++c = " << ++c << endl; // output: 6
    cout << "c++ = " << c++ << endl; // output: 6
    cout << "c = " << c << endl; // output: 7
    return 0;
}