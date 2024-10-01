//Owen Zhao
//10/01/2024
//Lab 4: If Statements

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

    //Making variables for the number of fruit, the fruit, and the amount of sugar the fruit had
    int FruitNumber;
    string Fruit;
    int Sugar;
    
    //Asking user to input how many fruit they have
    cout << "How many fruits do you have? ";
    cin >> FruitNumber;
    cout << endl;
    
    //Some Lore
    cout << "You decide to put your fruits into the fridge... " << endl << endl;

    //Will keep looping until there is not more fruit
    while (FruitNumber != 0)
    {
        //Asking user to input what fruit they are putting into the fridge
        cout << "What fruit are you putting into the fridge? ";
        cin >> Fruit;
        cout << endl;

        //Asking user to input how much sugar is in the fruit
        cout << "How many grams of sugar are in a cup of the fruit you chose? ";
        cin >> Sugar;
        cout << endl;

        //Each if statement is used to decide if the fruit is LOW, MEDIUM, or HIGH in sugar
        if (Sugar <= 10)
        {
            cout << "LOW SUGAR FRUIT" << endl << endl;
        }

        if (10 < Sugar <= 14)
        {
            cout << "MEDIUM SUGAR FRUIT" << endl << endl;
        }

        if (Sugar > 14)
        {
            cout << "HIGH SUGAR FRUIT" << endl << endl;
        }

        //Tells user how many fruits they have left
        cout << "You have " << FruitNumber - 1 << " fruits left..." << endl << endl;

        //Made so that each time you go through the full proccess there is one less fruit
        FruitNumber = FruitNumber - 1;
    }

return 0;
}

/*
How many fruits do you have? 2

You decide to put your fruits into the fridge...

What fruit are you putting into the fridge? Grape

How many grams of sugar are in a cup of the fruit you chose? 12

MEDIUM SUGAR FRUIT

You have 1 fruits left...

What fruit are you putting into the fridge? Apple

How many grams of sugar are in a cup of the fruit you chose? 12

MEDIUM SUGAR FRUIT

You have 0 fruits left...
*/