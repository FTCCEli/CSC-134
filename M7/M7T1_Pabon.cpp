// CSC 134
// M7T1
// Elijah Pabon
// 5/11/25
 
#include <iostream>
#include <iomanip>

using namespace std;

class Restaurant {
    public:
        void SetName(string restaurantName);
        void SetRating(int userRating);
        void Print();
    private:
        string name;
        int rating;

};

void Restaurant::SetName(string restaurantName){
    name = restaurantName;
}
void Restaurant::SetRating(int userRating){
    rating = userRating;
}
void Restaurant::Print(){
    cout << name << " ---> " << rating << "stars" << endl;
}
int main(){
    Restaurant bestHotDog;
    bestHotDog.SetName("Hot Diggity Dog");
    bestHotDog.SetRating(5);
    bestHotDog.Print();
    Restaurant backupDog;
    backupDog.SetName("Wiener Works");
    backupDog.SetRating(4);
    backupDog.Print();
    Restaurant emergencyDog;
    emergencyDog.SetName("Cookout");
    emergencyDog.SetRating(3);
    emergencyDog.Print();

    return 0;
}