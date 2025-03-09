// CSC 134
// M2LAB1
// Elijah Pabon
// 2/14/25

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
string answer;
    cout << "Hey, I'm a C++ chatbot." << endl;
    cout << "Is your refrigerator running? Enter \"yes\" or \"no\"."<< endl;
    cin >> answer;
    if (answer == "yes"){
        cout << "Then you better go catch it. jajajajaja." << endl;
    }
    else if ( answer == "no"){
        cout << "Then you should fix it. jajajajaja." << endl;
    }
    else { 
        cout << "Invalide entry." << endl;
    }
    return 0;
    
}