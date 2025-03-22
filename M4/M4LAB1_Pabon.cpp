// CSC 134
// M4LAB1
// Elijah Pabon
// 3/22/25
 
#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
    cout << "Enter the side length of your square as a positive whole number:"; // Prompt 
    int width; // Initializing variables 
    cin >> width;
    cout << endl;

    for(int j = 0; j < width; j ++){ // Outer loop 
    
        for(int i = 0; i < width; i ++){ // Nested loop 
            cout << "* ";}
        cout << endl;}
    cout << endl;
    cout << "Done"; // Ending message 
    cout << endl;

    return 0;
}