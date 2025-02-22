//CSC 134
//M2HW1 - Gold
//Elijah Pabon 
// 02/22/25

#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
    cout << "Question three" << endl;
    int pizza,
        people,
        leftover,
        slices;

    cout << "Number of pizzas: ";
    cin >> pizza;
    cout << "Number of slices per pizza: ";
    cin >> slices;
    cout << "Number of people: ";
    cin >> people;

    //Calculations

    leftover = pizza * slices - people * 3;

    cout << "The number of slices remaining after the party is " << leftover << "." << endl;

    return 0;

}