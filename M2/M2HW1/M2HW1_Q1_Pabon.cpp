//CSC 134
//M2HW1 - Gold
//Elijah Pabon 
// 02/22/25

#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
   cout << "Question one" << endl;

    string name;
    double balance,
            withdraw,
            deposit,
            amount;


    // Set the desired output formatting for numbers.
   cout << setprecision(2) << fixed << showpoint;

   cout << "Name: ";
   cin >> name;
   cout << name << " account# 000271828 "<< endl;
   cout << "Declare account balance: " << endl; 
   cin >> balance ;

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
         balance = balance + amount;
         cout << "Your new balance is: $" << balance << endl; 
      break;

      case 2:
         cout << "Enter amount: ";
         cin >> withdraw;
         balance = balance - withdraw;
         cout << "Your new balance is: $" << balance << endl;
      break;

 
      default:
      break;
    }

   return 0;

}