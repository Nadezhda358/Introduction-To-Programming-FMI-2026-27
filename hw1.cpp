#include <iostream>
using namespace std;

int main()
{
    //Calc
    double firstNum, secondNum;

    cout << "Enter first number: ";
    cin >> firstNum;
    cout << "Enter second number: ";
    cin >> secondNum;

    cout << firstNum << " + " << secondNum << " = " << firstNum + secondNum << endl;
    cout << firstNum << " - " << secondNum << " = " << firstNum - secondNum << endl;
    cout << firstNum << " * " << secondNum << " = " << firstNum * secondNum << endl;
    if(secondNum == 0)
    {
        cout << "Error: Cannot divide by 0";
        return 1;
    }
    cout << firstNum << " / " << secondNum << " = " << firstNum / secondNum << endl;
    cout << firstNum << " % " << secondNum << " = " << fmod(firstNum, secondNum) << endl;


    //Cows and chickens
    int animalCount, animalLegs, cowsCount, chickensCount;
    const int CHICHEN_LEGS = 2;
    const int COW_LEGS = 4;

    cout << "Enter animals count: ";
    cin >> animalCount;
    cout << "Enter legs count: ";
    cin >> animalLegs;

    if (animalLegs < animalCount * 2 || animalLegs > animalCount * 4 || animalLegs % 2 != 0 || animalCount < 0 || animalLegs < 0)
    {
        cout << "Input parameters are invalid";
        return 1;
    }

    cowsCount = (animalLegs - animalCount * CHICHEN_LEGS) / (COW_LEGS - CHICHEN_LEGS);
    chickensCount = animalCount - cowsCount;

    cout << "Cows: " << cowsCount << "\nChickens: " << chickensCount;
}
