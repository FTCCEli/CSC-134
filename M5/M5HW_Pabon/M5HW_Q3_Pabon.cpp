// CSC 134
// M5HW - Bronze
// Elijah Pabon
// 4/20/25
 
#include <iostream>
#include <iomanip>
using namespace std;

void roman_num(int num){
    if (num == 1){
        cout << "I";
    }
    else if (num == 2){
        cout << "II";
    }
    else if (num == 3){
        cout << "III";
    }
    else if (num == 4){
        cout << "IV";
    }
    else if (num == 5){
        cout << "V";
    }
    else if (num == 6){
        cout << "VI";
    }
    else if (num == 7){
        cout << "VII";
    }
    else if (num == 8){
        cout << "VIII";
    }
    else if (num == 9){
        cout << "IX";
    }
    else {
        cout << "X";
    }
}
int main()
{ 
    cout << "Question 3" << endl;
    int num = 0;
    while (num <= 0 || num > 10){
        cout << "Enter a number between 1 & 10 :";
        cin >> num;
    }
    cout << "The roman numural version of " << num << " is: ";
    roman_num(num);
    cout << endl;
    return 0;
}