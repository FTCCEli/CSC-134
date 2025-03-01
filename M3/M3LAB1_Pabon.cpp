// CSC 134
// M3T2
// Elijah Pabon
// 2/22/2025

#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
    int choice_1,
        choice_2;

    cout << "You're on a bridge that passes over a train track."<< endl;
    cout << "A train is on a sure path to kill 5 people working on the train track." << endl;
    cout << "If you push the large gentleman next to you off the bridge you could "<< endl;
    cout << "prevent the train from killing the five workers."<< endl;
    cout << "1: Push" << endl;
    cout << "2: Pon't push" << endl;
    cout << "Enter the # that corresponds with your choice:";

    cin >> choice_1;

    if ( choice_1 == 1)
        {
            cout << "The large man's body stops the train, saving the workers but he is killed in the process." << endl;
            cout << "Police officer says, \"Sir, what happened here?\"" << endl;
            cout << "1: I pushed the man for the greater good."<< endl;
            cout << "2: The man jumped."<< endl;
            cout << "Enter the # that corresponds with your response to the police man:";
            cin >> choice_2;

            if ( choice_2 == 2)
            { 
                cout << "Mr. Large Man was remembered as a hero and you get off scott-free."<< endl;
            }
            else if ( choice_2 == 1)
            {
                cout << "You're taken in for questioning and later arrested for the homicide of Mr. Large Man." << endl;
            }
            else 
            {
                cout << "Your silence raises suspicion."<< endl;
                cout << "You're taken in for questioning and later arrested for the homicide of Mr. Large Man." << endl;
            }

        }

    else if (choice_1 == 2)
        {
            cout << "5 people died on the train tracks that day." << endl;
        }

    else 
        {
            cout << "You reacted too slow." << endl;
            cout << "5 people died on the train tracks that day." << endl;
        }
    
    cout << "Game Over"<< endl;
    cout << endl;
    cout << endl;


 return 0; 
}