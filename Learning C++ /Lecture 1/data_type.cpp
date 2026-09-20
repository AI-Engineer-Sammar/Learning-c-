#include <iostream> // boiler plate code for C++ program
using namespace std;


// variables are used to store data in a program. In C++, variables must be declared with a specific data type before they can be used. Common data types include int, float, double, char, and string.
// data types are used to define the type of data that a variable can hold. For example, an int variable can hold whole numbers, while a float variable can hold decimal numbers. It is important to choose the appropriate data type for your variables to ensure that your program runs correctly and efficiently.
int main() {
    int age = 25; // declaring an integer variable
    float height = 5.9f; // declaring a float variable
    double weight = 70.5; // declaring a double variable
    char grade = 'A'; // declaring a char variable
    string name = "John"; // declaring a string variable
    bool isStudent = true; // declaring a boolean variable

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Weight: " << weight << endl;
    cout << "Grade: " << grade  << endl;
    cout << "Is Student: " << isStudent << endl;

    return 0;
}
// sizeof(grade) see memory size of the variable 'grade' in bytes. In C++, the sizeof operator is used to determine the size, in bytes, of a data type or a variable. For example, if you want to find out how much memory the 'grade' variable occupies, you can use sizeof(grade) which will return the size of the char data type, typically 1 byte.
