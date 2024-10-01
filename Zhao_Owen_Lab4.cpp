//Owen Zhao
//10/01/2024
//Lab 4: If Statements

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

    double Grape = 15;
    double Strawberry = 7;
    double Blueberry = 14;
    double Grapefruit = 18;
    double Rasberry = 5;
    double SugarLimit;
    double Cups;
    double Math;
    string Fruit;

    cout << "What is your sugar limit for today? ";
    cin >> SugarLimit;

    cout << "How many cups of this fruit are you trying to eat? ";
    cin >> Cups;

    cout << "Pick a fruit: Grape, Strawberry, Blueberry, Grapefruit, Rasberry ";
    cin >> Fruit;

    if(Fruit == "Grape")
        Math = Cups * Grape;

    if(Fruit == "Strawberry")
        Math = Cups * Strawberry;

    if(Fruit == "Blueberry")
        Math = Cups * Blueberry;

    if(Fruit == "Grapefruit")
        Math = Cups * Grapefruit;

    if(Fruit == "Rasberry")
        Math = Cups * Rasberry;

        while (Math > SugarLimit)
            cout << "The amount of food you're going to eat is over your sugar limit! Pick another fruit: Grape, Strawberry, Blueberry, Grapefruit, Rasberry ";
            cin >> Fruit;
        
        if (Math < SugarLimit)
            cout << "Okay, enjoy your fruit! ";


return 0;
}