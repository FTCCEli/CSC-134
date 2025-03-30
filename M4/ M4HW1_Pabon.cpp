// CSC 134
// M4HW1 Gold
// Elijah Pabon
// 3/29/25
 
#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
    int n; // Initializing variables
    cout << "Enter a number 1 threw 12:";  // Prompt
    cin >> n;
    while ( n > 12 || n < 1 || cin.fail()){ // Input validation 
        cout << "Enter a number 1 threw 12:"; // Prompt again
        cin >> n;
        cout << endl;}
    // Multiplication table
    for(int j = 1; j <= 12; j ++){   
        int p = n * j;
        cout << n <<" times " << j << " is " << p << endl;}

    return 0;
}