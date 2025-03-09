// CSC 134
// M3HW1
// Elijah Pabon
// 3/9/25

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << "Question four" << endl;
    cout << endl;
    srand(time(nullptr));
    int random_number = rand() % 10; // Random number between 1 and 10
    int random_number2 = rand() % 10; // Random number between 1 and 10
    int answer = random_number + random_number2; // Computation
    cout << "What is " << random_number << " + " << random_number2 << "?" << endl;
    int attempt;
    cin >> attempt;
    // Print ruslts
    if (attempt == answer){
        cout << "Correct" << endl;
    }
    else {
        cout << "Incorrect" << endl;
    }
    cout << "Game Over"<< endl;
    cout << endl;
    return 0;
}

