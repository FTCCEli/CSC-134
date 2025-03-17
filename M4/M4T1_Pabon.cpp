// CSC 134
// M4T1
// Elijah Pabon
// 3/15/25
 


#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
    //Part one
    int n = 0;
    while ( n < 5)
    {
        cout << "Hello" << endl;
        n++;
    }
    cout << "That's all!" << endl;
    cout << endl;
    cout << endl;
    //Part two
    const int MIN_NUMBER = 1,
              MAX_NUMBER = 10;
    n = MIN_NUMBER;
    cout << "Number Number Squared" << endl;
    cout << "---------------------" << endl;
    while (n <= MAX_NUMBER)
    {
        cout << n << "\t\t" << (n * n) << endl;
        n++;
    }

    return 0;
}