// CSC 134
// M5LAB2
// Elijah Pabon
// 4/13/25
 
#include <iostream>
#include <iomanip>

using namespace std;
// Declare the prototypes
// the getLength,
// getWidth, getArea, and displayData
// functions here.
double get_length();
double get_width();
double get_area(double width, double length);
void displayData(double length, double width, double area);

int main()
{
	// This program calculates the area of a rectangle.
   double length,    // The rectangle's length
          width,     // The rectangle's width
          area;      // The rectangle's area
          
   // Get the rectangle's length.
   length = get_length();
   
   // Get the rectangle's width.
   width = get_width();
   
   // Get the rectangle's area.
   area = get_area(length, width);
   
   // Display the rectangle's data.
   displayData(length, width, area);
          
   return 0;
}

double get_length(){
    double length;
    cout << "Enter length:";
    cin >> length;
    return length;
}
double get_width(){
    double width;
    cout << "Enter width:";
    cin >> width;
    return width;
}
double get_area(double width, double length){
    double area = width * length;
    return area;
}
void displayData(double length, double width, double area){
    cout << "Length = " << length << endl;
    cout << "Width = " << width << endl;
    cout << "Area = " << area << endl;
}