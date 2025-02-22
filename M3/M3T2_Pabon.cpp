// CSC 134
// M3T2
// Elijah Pabon
// 2/22/2025

#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
    // declare variables 
    int widthOne,
        lengthOne,
        areaOne,
        widthTwo,
        lengthTwo,
        areaTwo;

    // Ask for rectangle inputs

    cout << "Please enter the width and length of rectangle one, seperated by a space or newline:" << endl;
    cin >> widthOne >> lengthOne;
    cout << "Please enter the width and length of rectangle two, seperated by a space or newline:" << endl;
    cin >> widthTwo >> lengthTwo;

    // Area computation

    areaOne = widthOne * lengthOne;
    areaTwo = widthTwo * lengthTwo;

    // Display results 

    cout << "The area of rectangle one is " << areaOne << " square units." << endl;
    cout << "The area of rectangle two is " << areaTwo << " square units." << endl;

    // Determine the bigger area
    if (areaOne > areaTwo)
    {
        cout << "Rectangle one is bigger." << endl;
    }
    if (areaTwo > areaOne)
    {
        cout << "Rectangle two is bigger." << endl;
    }
    if (areaOne == areaTwo)
    {
        cout << "Both rectangles are the same size." << endl;
    }

    cout << "Thanks for using the program." << endl;



    return 0;

}