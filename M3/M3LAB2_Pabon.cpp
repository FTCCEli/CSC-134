// CSC 134
// M3LAB2
// Elijah Pabon
// 3/9/25

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double grade;
    cout << "Enter your numerical grade up to two decimal places:"; 
    cin >> grade;
    cout << "You letter grade is: ";
    if (grade <= 100 && grade > 90){ 
        cout << "A"<< endl;
    }
    else if (grade <= 89.99 && grade > 80){
        cout << "B";
    }
    else if (grade <= 79.99 && grade > 70){
        cout << "C" << endl;
    }
    else (grade <= 69.99 && grade > 0);{
        cout << "F" << endl;
    }
    return 0;
    }