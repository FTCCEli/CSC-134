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

    cout << "You're home alone."<< endl;
    cout << "You hear the phone ring down the hall." << endl;
    cout << "You don't recognize the phone number."<< endl;
    cout << "1: Answer the phone." << endl;
    cout << "2: Don't answer teh phone." << endl;
    cout << "Enter the # that corresponds with your choice:";

    cin >> choice_1;

    if ( choice_1 == 1)
        {
            cout << "The voice on the other side of the lines says \"Look behind you.\"" << endl;
            cout << "You see tall masked figure standing at the end of the hallway." << endl;
            cout << "1: Fight."<< endl;
            cout << "2: Run."<< endl;
            cout << "Enter the # that corresponds with choice:";
            cin >> choice_2;

            if ( choice_2 == 1)
            { 
                cout << "You run full speed at the fingure."<< endl;
                cout << "Right as you make contact with figure your body jolts awake."<< endl;
                cout << "It was just a dream."<< endl;
            }
            else if ( choice_2 == 2)
            {
                cout << "You run as quickly as you can out the door." << endl;
                cout << "You hop in your car and drive."<< endl;
                cout << "You as you try to leave your neighbourhood,"<< endl;
                cout << "but you realize don't recognize any of the streets."<< endl;
                cout << "You drive and drive to no end."<< endl;
                cout << "The houses lining the street seem to go on endlessly."<< endl;
                cout << "."<< endl;
                
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