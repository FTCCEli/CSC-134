// CSC 134
// M2T1
// Elijah Pabon
// 2/9/2025

#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
  string name = "Elijah's"; 
  int num_apples = 10; // "int" are whole number 
  double price_each = 0.25; // "double" are decimals 

cout << "Welcome to the " << name << " apple farm!" << endl;
cout << "We have " << num_apples << " in stock." << endl;
cout << "Each apple cost $" << price_each << "!" << endl;

// Toltal price for all the apples to two decimal places
cout << setprecision(2) << fixed;
double total_price = num_apples * price_each; 

// print totoal for all the apples
cout << "The totall price for all " << num_apples;
cout << " is: $" << total_price << endl;
cout << "Thanksfor stopping by!" << endl;
    return 0; // no errors
}