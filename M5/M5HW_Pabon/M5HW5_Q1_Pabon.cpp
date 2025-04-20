// CSC 134
// M5HW
// Elijah Pabon
// 4/20/25
 
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{ 
    string  month;
    double inches, average;
    double sum = 0;
    cout << setprecision(2) << fixed << showpoint;
    for (int i = 0; i < 3; i++){
        cout << "Enter month: ";
        cin >> month;
        cout << "Enter inches of rain: ";
        cin >> inches;
        sum = sum + inches;
    }
    average = sum/3;
    cout << "The average amount of rain is: " << average << " inches" << endl;
    

return 0;
}