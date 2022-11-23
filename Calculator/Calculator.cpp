#include <iostream>
using namespace std;

void getAddition()
{
    int num1, num2;
    cout << "\nEnter First number :";
    cin >> num1;
    cout << "\nEnter Second number :";
    cin >> num2;

    if ((num1 > INT_MAX && num1 < INT_MIN) || (num2 > INT_MAX && num2 < INT_MIN))
    {
        cout << " Input value is out of range ";
    }
    else if ((num1 >= INT_MAX && num2 > 0) || (num2 >= INT_MAX && num1 > 0))
    {
        unsigned int result = num1 + num2;
        cout << "\nAddition : " << result;
    }
    else
    {
        cout << "\nAddition : " << num1 + num2;
    }
}

void getSubstraction()
{
    int num1, num2;
    cout << "\nEnter First number :";
    cin >> num1;
    cout << "\nEnter second number :";
    cin >> num2;

    signed int subtraction;

    if ((num2 > 0 && num1 < INT_MIN + num2) || (num2 < 0 && num1 > INT_MAX + num2))
    {
        cout << " Input value is out of range ";
    }
    else
    {
        subtraction = num1 - num2;
        cout << "\nSubstraction : " << subtraction;
    }
}

void getMultiplication()
{
    signed int num1, num2;
    cout << "\nEnter first number :";
    cin >> num1;
    cout << "\nEnter second number :";
    cin >> num2;

    if ((num1 >= INT_MAX && num2 > 1) || (num2 >= INT_MAX && num1 > 1))
    {
        unsigned int mul = num1 * num2;
        cout << "\nMultiplication : " << mul;
    }
    else if ((num1 <= INT_MIN && num2 < 0) || (num2 <= INT_MIN && num1 < 0))
    {
        unsigned int multiplication = num1 * num2;
        cout << "\nMultiplication : " << multiplication;
    }
    else
    {
        int multiplication = num1 * num2;
        cout << "\nMultiplication : " << multiplication;
    }
}

void getDivision()
{
    int numerator, denominator;
    cout << "\nEnter number: ";
    cin >> numerator;
    cout << "\nEnter denominator : ";
    cin >> denominator;
    int division;
    if ((denominator == 0) || ((numerator == INT_MIN) && (denominator == -1)))
    {
        cout << "Math error : Denominator cannot be zero";
    }
    else
    {
        division = numerator / denominator;
        cout << "\nDivision : " << division;
    }
}

int main()
{
    int choice;

    cout << " " << endl;
    cout << "Press 1 : for Addition";
    cout << "\nPress 2 : for substraction";
    cout << "\nPress 3 : for multiplication";
    cout << "\nPress 4 : for division";
    cout << "\nPress 0 : for exit";
    cout << "\nEnter your choice : ";
    cin >> choice;

    switch (choice)
    {
    case 0:
        exit(0);
        break;

    case 1:
        getAddition();
        break;

    case 2:
        getSubstraction();
        break;

    case 3:
        getMultiplication();
        break;

    case 4:
        getDivision();
        break;

    default:
        cout << "Invalid input , Please enter a valid choice ";
        break;
    }

    return 0;
}