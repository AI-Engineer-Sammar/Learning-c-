#include <iostream> // boiler plate code for C++ program
using namespace std;
int main(){
    int i=0; // declaring an integer variable
    // for loop
    // for(i=0; i<5; i++){ // initializing, condition checking, and incrementing the loop variable
    //     cout << "For loop iteration: " << i << endl; // outputting the current iteration number
    // }
    // // while loop
    // i = 0; // resetting the loop variable
    // while(i<5){ // checking the loop condition
    //     cout << "While loop iteration: " << i << endl; // outputting the current iteration number
    //     i++; // incrementing the loop variable  
    // }
    do{
        cout<< i <<endl;
        i++;
    }while(i<=20);
    return 0;
}