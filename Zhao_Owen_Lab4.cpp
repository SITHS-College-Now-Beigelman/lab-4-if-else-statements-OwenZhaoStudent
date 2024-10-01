//Owen Zhao
//10/01/2024
//Lab 4: If Statements

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

    int Grape = 15;
    int Strawberry = 7;
    int Blueberry = 14;
    int Grapefruit = 18;
    int Rasberry = 5;
    int Sugar;
    int Guess;
    int Guess2;
    string Fruit;

    cout << "In this game you will guess how much sugar is in a fruit!";
    cout << endl<< endl;
    cout << "Pick a fruit: Grape, Strawberry, Blueberry, Grapefruit, Rasberry ";
    cin >> Fruit;

    if (Fruit == "Grape")
        Sugar = Grape;

    if (Fruit == "Strawberry")
        Sugar = Strawberry;

    if (Fruit == "Blueberry")
        Sugar = Blueberry;

    if (Fruit == "Grapefruit")
        Sugar = Grapefruit;

    if (Fruit == "Rasberry")
        Sugar = Rasberry; 

    cout << "How much sugar do you think is in this fruit? ";
    cin >> Guess;

    while (Guess != Sugar)
    {
        cout << "Thats wrong! Try again! " << endl;
        cout << "New guess: ";
        cin >> Guess2;

            if (Guess2 == Sugar)
            cout << "That's correct! You win nothing! ";
            break;

            if (Guess2 != Sugar)
            continue;
    }

    while (Guess == Sugar)
    {
        cout << "That's correct! You win nothing!";
        break;
    }

return 0;
}