// CSC 134
// M5T1
// Elijah Pabon
// 4/6/25
 
#include <iostream>
#include <iomanip>

using namespace std;

// Functions 
void say_hello() 
{
    cout << "Hi from say_hello() " << endl;
    return;
}
int give_the_answer() 
{
    return rand();
}
int double_a_number(int num) 
{
    int new_num = num * 2;
    return new_num;
}

int main()
{
    cout << "Hello from main()" << endl;
    say_hello();
    int my_answer = give_the_answer();
    cout << "The answer is: " << my_answer << endl;
    // now double the answer
    int twotimes = double_a_number(7);
    cout << "Here's another number: " << twotimes << endl;
    return 0;
}
