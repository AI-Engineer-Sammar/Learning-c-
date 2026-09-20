// type casting is a way to convert a variable from one data type to another in C++. It allows you to explicitly specify the desired data type for a variable or expression. There are two types of type casting in C++: implicit and explicit.
// type conversion is the process of converting a value from one data type to another. In C++, there are several ways to perform type conversion, including implicit conversion, explicit conversion, and using type casting operators. Implicit conversion occurs automatically when a value is assigned to a variable of a different data type, while explicit conversion requires the use of a cast operator to convert the value to the desired data type. Type casting operators include static_cast, dynamic_cast, const_cast, and reinterpret_cast. It is important to use type conversion carefully to avoid unexpected behavior or loss of data.
#include <iostream> // boiler plate code for C++ program
using namespace std;
int main() { 
    int a = 100; // declaring an integer variable
    float b = 20.5; // declaring a float variable
    // explicit type casting
    double c = static_cast<double>(a); // converting int to double
    cout << "Value of c: " << c << endl; // output: 100
    // explicit type casting 

    return 0;
}