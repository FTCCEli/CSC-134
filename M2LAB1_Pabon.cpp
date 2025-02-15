// CSC 134
// M2LAB1
// Elijah Pabon
// 2/14/25

#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
    // Constants for cost and amount
    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIC_FOOT = 0.5;

    // Variables 
    double length,
            width,
            height,
            volume,
            cost,
            charge,
            profit;

    // Set the desired output formatting for numbers.
    cout << setprecision(2) << fixed << showpoint;

    // Acquiring crate dimensions
    cout << "Enter the dimensions of the crate (in feet). " << endl;
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;

    // Computation of the crates volume, cost, charge, and profit.

    volume = length * width * height;
    cost = volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge - cost;
    
    // Display calculated data

    cout << "The volume of the crate is " << volume << " cubic feet. " << endl;
    cout << "The cost to build is $" << cost << ". " << endl;
    cout << "The charge to the customer is $" << charge << ". " <<endl;
    cout << "The profit from the crate is $" << profit<<  endl; 
    return 0;

}