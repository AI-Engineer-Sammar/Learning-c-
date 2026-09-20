/*
====================================================
                C++ ARRAYS
====================================================

What is a Data Structure?

A data structure helps us organize and store
a large amount of data efficiently.

Examples:
- Array
- Linked List
- Stack
- Queue
- Tree
- Graph


====================================================
                1D ARRAY
====================================================

In C++, an array stores multiple values of the
same data type.

Python list ke concept se roughly compare kar
sakte hain, lekin C++ ka normal array fixed-size hota hai.
*/

#include <iostream>
using namespace std;


// ==================================================
// PROJECT 1 — Basic 1D Array
// ==================================================

void basicArray() {

    int arr[9] = {1,2,3,4,5,6,7,8,9};

    cout << "First element: " << arr[0] << endl;

    cout << "All elements:" << endl;

    for (int i = 0; i < 9; i++) {
        cout << arr[i] << endl;
    }
}


/*
Important:

Agar array hai:

int arr[9];

Indexes honge:

0 1 2 3 4 5 6 7 8

Last index:

arr[8]

arr[9] invalid hai.

Array indexing 0 se start hoti hai.
*/


// ==================================================
// 2D ARRAY
// ==================================================

void twoDArray() {

    int arr2[5][9] = {

        {1,2,3,4,5,6,7,8,9},

        {1,2,3,4,5,6,7,8,9},

        {1,2,3,4,5,6,7,8,9},

        {1,2,3,4,5,6,7,8,9},

        {1,2,3,4,5,6,7,8,9}
    };


    /*
    Ismein:

    5 rows
    9 columns

    Total elements:

    5 × 9 = 45
    */


    cout << "\n2D Array:" << endl;

    for (int i = 0; i < 5; i++) {

        for (int j = 0; j < 9; j++) {

            cout << arr2[i][j] << " ";
        }

        cout << endl;
    }
}


// ==================================================
// PROJECT 2 — Find Sum of Array
// ==================================================

void arraySum() {

    int arr[5];

    int sum = 0;


    cout << "\nEnter 5 numbers:" << endl;


    for (int i = 0; i < 5; i++) {

        cin >> arr[i];

        sum += arr[i];
    }


    cout << "Sum = " << sum << endl;
}


// ==================================================
// PROJECT 3 — Find Maximum and Minimum
// ==================================================

void maxMin() {

    int arr[5] = {
        10,
        45,
        23,
        78,
        12
    };


    int maximum = arr[0];

    int minimum = arr[0];


    for (int i = 1; i < 5; i++) {

        if (arr[i] > maximum) {

            maximum = arr[i];
        }


        if (arr[i] < minimum) {

            minimum = arr[i];
        }
    }


    cout << "\nMaximum = " << maximum << endl;

    cout << "Minimum = " << minimum << endl;
}


// ==================================================
// PROJECT 4 — Reverse an Array
// ==================================================

void reverseArray() {

    int arr[5] = {
        10,
        20,
        30,
        40,
        50
    };


    cout << "\nReverse Array:" << endl;


    for (int i = 4; i >= 0; i--) {

        cout << arr[i] << " ";
    }


    cout << endl;
}


// ==================================================
// PROJECT 5 — Count Even and Odd Numbers
// ==================================================

void evenOdd() {

    int arr[8] = {
        1,
        2,
        3,
        4,
        5,
        6,
        7,
        8
    };


    int even = 0;

    int odd = 0;


    for (int i = 0; i < 8; i++) {

        if (arr[i] % 2 == 0) {

            even++;
        }

        else {

            odd++;
        }
    }


    cout << "\nEven numbers = " << even << endl;

    cout << "Odd numbers = " << odd << endl;
}


// ==================================================
// PROJECT 6 — Search an Element
// ==================================================

void searchElement() {

    int arr[5] = {
        10,
        20,
        30,
        40,
        50
    };


    int search;

    bool found = false;


    cout << "\nEnter number to search: ";

    cin >> search;


    for (int i = 0; i < 5; i++) {

        if (arr[i] == search) {

            cout << "Number found at index: "
                 << i << endl;

            found = true;

            break;
        }
    }


    if (!found) {

        cout << "Number not found." << endl;
    }
}


// ==================================================
// PROJECT 7 — Student Marks
// ==================================================

void studentMarks() {

    int marks[5];

    int total = 0;


    for (int i = 0; i < 5; i++) {

        cout << "Enter marks of student "
             << i + 1 << ": ";

        cin >> marks[i];


        total += marks[i];
    }


    float average = total / 5.0;


    cout << "\nTotal = "
         << total << endl;


    cout << "Average = "
         << average << endl;
}


// ==================================================
// PROJECT 8 — 2D Matrix
// ==================================================

void matrix() {

    int matrix[3][3] = {

        {1, 2, 3},

        {4, 5, 6},

        {7, 8, 9}
    };


    cout << "\n3x3 Matrix:" << endl;


    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 3; j++) {

            cout << matrix[i][j] << " ";
        }

        cout << endl;
    }
}


// ==================================================
// MAIN FUNCTION
// ==================================================

int main() {

    // Kisi ek project ko run karne ke liye
    // us function ko uncomment karo.


    basicArray();

    twoDArray();

    // arraySum();

    // maxMin();

    // reverseArray();

    // evenOdd();

    // searchElement();

    // studentMarks();

    // matrix();


    return 0;
}


/*
====================================================
              PRACTICE PROJECTS
====================================================

1. Array Calculator
   - Sum
   - Subtraction
   - Average


2. Student Marks System
   - Highest marks
   - Lowest marks
   - Average


3. Number Search System
   - User se number lo
   - Array mein search karo


4. Duplicate Finder
   - Array mein duplicate numbers find karo


5. Array Sorting
   - Ascending order
   - Descending order


6. 2D Matrix Addition
   - Do matrices ko add karo


7. Matrix Transpose
   - Rows ko columns mein convert karo


8. Tic-Tac-Toe
   - 2D array se game board banao


9. Simple Inventory System
   - Product prices
   - Product quantities


10. Mini Quiz System
    - Questions store karo
    - Answers check karo
    - Score calculate karo


====================================================
IMPORTANT CONCEPTS TO PRACTICE
====================================================

1. Array indexing
2. for loop
3. Nested loops
4. if/else
5. Searching
6. Maximum/Minimum
7. Sum/Average
8. 1D Array
9. 2D Array
10. Functions
*/
