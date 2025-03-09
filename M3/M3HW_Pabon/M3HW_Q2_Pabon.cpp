// CSC 134
// M2LAB1
// Elijah Pabon
// 2/14/25

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << "Question two" << endl;
    string farm_name = "Juicy's ";
    int num_apples = 100; // "int" only represents whole nubers between -2,147,483,648 and 2,147,483,647
    double cost_each = 0.25; // "double" can represnt decimals 
    // New variables for M2T1
  
    string user_name; // Who's buying Juicy's apples?
    int apples_to_buy; // How many do they want.
  
    // greeting the customer
    cout << "Howdy! What's your name? ";
    cin >> user_name;
    cout << "Thanks for stopping by, " << user_name << "!" << endl;
  
    cout << "Welcome to " << farm_name << "apple farm!" << endl; 
    cout << "There are " << num_apples << " apples in stock." << endl;
    cout << "They cost $" << cost_each << " each." << endl;
    
    // This line sets cout for doubles to 2 decimal places
    // you must put the line #include <iomanip> with the other #include statements up
    cout << setprecision(2) << fixed;
  
    // Compute total price 
    double total_cost = num_apples * cost_each;
    cout << "The total for all of " << farm_name << "apples is: $" << total_cost << endl;
  
    // Closing the sale
    cout << "How many apples would you like? "; 
    cin >> apples_to_buy;
  
    total_cost = apples_to_buy * cost_each;
  
    cout << "Thank you! " << apples_to_buy << " apples comes to $" << total_cost << endl;
    cout << "Have a nice day!" << endl;
    cout << endl;
  
      return 0; // no errors