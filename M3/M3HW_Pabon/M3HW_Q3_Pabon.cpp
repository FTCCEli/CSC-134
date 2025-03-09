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
                cout << endl;
            }
            else if ( choice_2 == 2)
            {
                cout << "You run as quickly as you can out the door." << endl;
                cout << "You hop in your car and drive."<< endl;
                cout << "You as you try to leave your neighbourhood,"<< endl;
                cout << "but you realize don't recognize any of the streets."<< endl;
                cout << "You drive and drive to no end."<< endl;
                cout << "The houses lining the street seem to go on endlessly."<< endl;
                cout << "The houses look less and less livable, not rundown,"<< endl;
                cout << "but built as if there not made to be lived in."<< endl;
                cout << "Houses with no windows, some with driveways that don't"<< endl;
                cout << "lead to street instead they just circle the house,"<< endl;
                cout << "others with entraces at the second floor of the house."<< endl;
                cout << "You continue driving until you see a house with it's"<< endl;
                cout << "light on."<< endl;
                cout << "Cautiously, you walk in the house."<< endl;
                cout << "The house looks exactily like yours."<< endl;
                cout << "You search the house but see no one."<< endl;
                cout << "As you stand at the end of the hallway you hear the"<< endl;
                cout << "phone ring."<< endl;
                cout << "You see a some that looks identical to you walk to"<< endl;
                cout << "and pick up the phone."<< endl;
                cout << "They turn to look at you..."<< endl;
                cout << "Their face looks scared and hepless."<< endl;
                cout << "Before you can say anything they run out the door."<< endl;
                cout << endl;
            }
            else 
            {
                cout << "You stand frozen."<< endl;
                cout << "The figure approaches you and before you can react" << endl;
                cout << "you succumb to the darkness."<< endl;
                cout << endl;
            }

        }

    else if (choice_1 == 2)
        {
            cout << "You wait for the ringing to stop." << endl;
            cout << "It doesn't."<< endl;
            cout << "It gets louder"<< endl;
            cout << "The tones in the ring start merging together"<< endl;
            cout << "and destorting."<< endl;
            cout << "As the noise grows loader you sudenly feel weak."<< endl;
            cout << "Houses with no windows, some with driveways that don't"<< endl;
            cout << "Houses with no windows, some with driveways that don't"<< endl;
            
        }

    else 
        {
            cout << "You reacted too slow." << endl;
            cout << "Houses with no windows, some with driveways that don't"<< endl;
        }
    
    cout << "Game Over"<< endl;
    cout << endl;
    cout << endl;


 return 0; 
}