// CSC 134
// M5HW - Bronze
// Elijah Pabon
// 4/20/25
 
#include <iostream>
#include <iomanip>

using namespace std;
double block_volume(double lenght, double width, double height){
    double volume = lenght * width * height;
    return volume;
}
int main()
{
    cout << "Question 2" << endl; 
   double length = 0;
   double width = 0;
   double height = 0;
   
   while(length <= 0){
    cout << "Enter length:";
    cin >> length;
   }
   while(width <= 0){
    cout << "Enter width:";
    cin >> width;
    }
    while(height <= 0){
        cout << "Enter height:";
        cin >> height;
        }
    cout << "The volume of your hyperrectagle is: " << block_volume(length, width, height) << endl;
    return 0;
    
   }