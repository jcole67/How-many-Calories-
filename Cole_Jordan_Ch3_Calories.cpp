//Cole, Jordan
//CO SCI_802_26188FA19V
//Chap. 3 How many Calories?
//A bag of cookies holds 30 cookies. The calorie information on the bag claims that there are 10 "serving" in the bag and that a serving equals 240 calories.
//Write a program that asks the user to input how many cookies they actually ate and then reports how many total calories were consumed. 

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double cookEaten, cookCals, bagPercent;                     //Create variables for cookies eaten, calories consumed, and % of bag consumed
    
    cout << "How many cookies have you eaten? " << endl;        //Ask user for cookies eaten
    cin >> cookEaten;
    
    cookCals = cookEaten * 80;                                  //Calculate calories based on user cookies eaten
    bagPercent = (cookEaten / 30) * 100;                        //Calculate % of bag consumed based on user cookies eaten
    
    //Output user cookies eaten, % of bag consumed, and calories consumed
    cout << "You have eaten " << cookEaten << " cookies (≈" << setprecision(3) << bagPercent;
    cout << "% of the bag). " << "That is " << setprecision(6) << cookCals << " calories consumed." << endl;
    
    system("pause");
    return 0;
}
