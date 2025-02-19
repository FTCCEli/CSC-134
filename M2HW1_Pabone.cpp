// CSC 134
// M2HW1
// Elijah Pabon
// 2/14/25

#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{

cout << "Question one" << endl;

    double balace,
            name,
            withdraw,
            deposit,
            amount;


 // Set the desired output formatting for numbers.
 cout << setprecision(2) << fixed << showpoint;

 cout << "Name: ";
 cin >> name;
 cout << "Starting account balance: ";
 cin >> balace;

 int choice; 

 cout << "Select from the following options:" << endl;
 cout << "1. Deposit" << endl;
 cout << "2. Withdraw" << endl; 
 cin >> choice;

 switch (choice)
 {
 case 1:
    cout << "Enter amount: ";
    cin >> amount;
    break;
 
 default:
    break;
 }


}