// CSC 134
// M4LAB1
// Elijah Pabon
// 3/25/25
 
#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
    int n; // Initializing variables
    cout << "Enter a number 1 threw 12:"; // Prompt 
    cin >> n;
    while ( n > 12 || n < 1){ 
        cout << "Enter a number 1 threw 12:"; // Prompt 
        cin >> n;
        cout << endl;}
    
    for(int j = 1; j <= 12; j ++){ // Outer loop 
        int p = n * j;
        cout << n <<" times " << j << " is " << p << endl;}

    return 0;
}