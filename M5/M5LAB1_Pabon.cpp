// CSC 134
// M5LAB1
// Elijah Pabon
// 4/13/25
 
#include <iostream>
#include <iomanip>

using namespace std;
/*
This template serves as a starting point
for your own program. We'll be using
void functions to tell a simple story,
where the user gets to make choices.

You can fork this template by clicking on the name above, then click the three
dots on the top right, and click 'fork repl'. This makes a copy for you to use.
*/

// Function Prototypes
// Any functions you make will need to
// be listed here, in this format, at the top.
// This is so the compiler knows to save
// room for them in the final program.
void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
void choice_continue();
// TODO: add more choices here

int main() {
  cout << "M5LAB1 - Choose Your Own Adventure" << endl;
  // load up the main menu
  main_menu();
  // when we return here, we're done
  cout << "Thanks for playing!" << endl;
  return 0; // finished with no errors
}

void main_menu() {
  // Write a simple menu that lets the user choose 1,2, or 3, or 4 to quit.
  cout << "Main Menu" << endl;
  cout << "You're in front of a spooky old house..." << endl;
  cout << "Do you:" << endl;
  cout << "1. Try the front door" << endl;
  cout << "2. Sneak around back" << endl;
  cout << "3. Forget it, and go home" << endl;
  cout << "4. [Quit]" << endl;
  cout << "Choose: ";
  int choice;
  cin >> choice;
  if (1 == choice) {
    choice_front_door();
  } else if (2 == choice) {
    // call choice 2 here
    choice_back_door();
  } else if (3 == choice) {
    // call choice 3 here
    choice_go_home();
  } else if (4 == choice) {
    cout << "Ok, quitting game" << endl;
    return; // go back to main()
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    main_menu();  // try again
  }
}

// FUNCTION DEFINITIONS
// OK, we have the prototypes at the top, but
// now we have to actually write the functions.
// They go here, after main().
void choice_front_door() {
  cout << "Try the front door." << endl;
  cout << "It's locked. " << endl;
  cout << "Do you:" << endl;
  cout << "1. Check around back" << endl;
  cout << "2. Give up and go home" << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    choice_back_door();
  } else if (2 == choice) {
    choice_go_home();
  }
}

void choice_back_door() { 
    cout << "You turn the corner around the house" << endl;
    cout << "and notice a woman sitting in the over-grown" << endl;
    cout << "grass. She looks strung out on something." << endl;
    cout << "She sways erratically yet peacefully as" << endl;
    cout << "small insects weave around her legs and arms" << endl;
    cout << "circling small cuts in her exposed skin." << endl;
    cout << "She turns to you in a moment of sobriety" << endl;
    cout << "and asks, \"Where are you headed?\"" << endl;
    cout << "Do you reply:" << endl;
    cout << "1. \"To the backdoor\"" << endl;
    cout << "2. \"Home\"" << endl;
    int choice;
    cout << "Choose: ";
    cin >> choice;
    if (1 == choice) {
        choice_continue();
    } else if (2 == choice) {
        choice_go_home();
    }
}
void choice_go_home() { 
    cout << "You run home and enjoy a Pop-Tart." << endl; }
void choice_continue(){
    cout << "You walk past her to the backdoor." << endl;
    cout << "The mat in front of the door is worn and moldy" << endl;
    cout << "and reads, \"Welcome Back.\"" << endl;
    cout << "You open the door and step into the kitchen." << endl;
    cout << "The sudden realization of the danger of your decision" << endl;
    cout << "hits you all at once." << endl;
    cout << "Your heart begins to race, your throat feels" << endl;
    cout << "tight and blocked as if you're going to cry. Every" << endl;
    cout << "small cry of the dilapidated house against the wind" << endl;
    cout << "gives you the sensation that something bad approaching." << endl;
    cout << "Then you hear \"chikink\". Your head snaps to the direction" << endl;
    cout << "of the sound. You see a Pop-Tart poking out of the toaster." << endl;
    cout << "You grab the snack and run home to enjoy it." << endl;

}
