// CSC 134
// M5T2
// Elijah Pabon
// 4/6/25
 
#include <iostream>
#include <iomanip>

using namespace std;
int square(int number)
{
    int result;
    result = number * number;
    return result; 
}
void printAnswer(int number, int result)
{
    cout << number << " squared= " << result << endl;
}

main()
{
    int result;

    for (int count = 1; count < 10; count++)
    {
        result = square(count);
        printAnswer(count, result);
    }
    return 0;
}