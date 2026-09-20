#include <iostream>
#include <string> // string use karne ke liye is header ki zaroori hoti hai
// we create a print function of python for understanding functions
using namespace std;

// 1. Function Declaration (Compiler ko pehle batana zaroori hai)
int print(string name); 

// 2. main function hamesha 'int' hota hai, 'void' nahi
int main() {
    print("sammar");
    return 0; // int main hamesha 0 return karta hai agar program sahi chale
}

// 3. Function Definition
int print(string name) {
    cout << name << endl;
    return 0; // Kyunki function ka return type 'int' hai, isliye kuch return karna hoga
}

