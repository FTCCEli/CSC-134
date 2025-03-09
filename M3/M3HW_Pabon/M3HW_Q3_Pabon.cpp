// CSC 134
// M3T2
// Elijah Pabon
// 3/9/2025

#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
    int choice_1,
        choice_2;
    cout << "Question Three."<< endl;
    cout << endl;
    cout << "You're home alone."<< endl;
    cout << "You hear the phone ring down the hall." << endl;
    cout << "You don't recognize the phone number."<< endl;
    cout << "1: Answer the phone." << endl;
    cout << "2: Ignore phone." << endl;
    cout << "Enter the # that corresponds with your choice:";

    cin >> choice_1;

    if ( choice_1 == 1)
        {
            cout << "The voice on the other side of the line says, \"Look behind you.\"" << endl;
            cout << "You see a tall masked figure standing at the end of your hallway." << endl;
            cout << "1: Fight."<< endl;
            cout << "2: Run."<< endl;
            cout << "Enter the # that corresponds with your choice:";
            cin >> choice_2;

            if ( choice_2 == 1)
            { 
                cout << "You run full speed at the figure."<< endl;
                cout << "Right as you make contact with the figure, your body jolts awake."<< endl;
                cout << "It was just a dream."<< endl;
                cout << endl;
            }
            else if ( choice_2 == 2)
            {
                cout << "You run as quickly as you can out the door." << endl;
                cout << "You hop in your car and drive."<< endl;
                cout << "You try to leave your neighbourhood, but you don't"<< endl;
                cout << "recognize any of the streets."<< endl;
                cout << "You drive and drive to no end."<< endl;
                cout << "The houses lining the street seem to go on endlessly."<< endl;
                cout << "They begin to look less and less livable, not rundown,"<< endl;
                cout << "but built as if they're not made to be lived in."<< endl;
                cout << "Houses with no windows, some with driveways that just"<< endl;
                cout << "circle the house and don't lead to the street, others"<< endl;
                cout << "with entrances that are impractical to access."<< endl;
                cout << "You continue driving until you see a house with its"<< endl;
                cout << "lights on."<< endl;
                cout << "You park and cautiously walk in the house."<< endl;
                cout << "The house looks exactly like yours."<< endl;
                cout << "You search the house but see no one."<< endl;
                cout << "As you stand at the end of the hallway, you hear the"<< endl;
                cout << "phone ring."<< endl;
                cout << "You see someone that looks identical to youself walk"<< endl;
                cout << "to the phone and pick it up."<< endl;
                cout << "They turn to look at you..."<< endl;
                cout << "Their face looks scared and helpless."<< endl;
                cout << "Before you can say anything, they run out the door."<< endl;
                cout << endl;
            }
            else 
            {
                cout << "You stand frozen."<< endl;
                cout << "The figure approaches you, and before you can react..." << endl;
                cout << "You succumb to the darkness."<< endl;
                cout << endl;
            }

        }

    else if (choice_1 != 1)
        {
            cout << "You wait for the ringing to stop." << endl;
            cout << "It doesn't."<< endl;
            cout << "It gets louder."<< endl;
            cout << "The tones of the ring start merging together"<< endl;
            cout << "destorting, oscillating, and pulsing."<< endl;
            cout << "As the noise grows louder, you suddenly feel weak."<< endl;
            cout << "You collapse on the floor and use your last bit of "<< endl;
            cout << "energy to dissconnect the phone from the wall."<< endl;
            cout << "The sound rings louder than before as one constant"<< endl;
            cout << "tone."<< endl;
            cout << "You blink and turn to the phone."<< endl;
            cout << "It's gone."<< endl;
            cout << "Everything is gone."<< endl;
            cout << "The sound was now coming from a heart monitor"<< endl;
            cout << "The white sheets of the hospital bed soak red."<< endl;
            cout << "The surgical team frantically tries to stop the"<< endl;
            cout << "bleeding."<< endl;
            cout << "You close your eyes."<< endl;
            
        }
    
    cout << "Game Over."<< endl;
    cout << endl;
    cout << endl;


 return 0; 
}