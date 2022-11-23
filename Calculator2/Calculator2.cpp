#include <iostream>
using namespace std;

void getAddition()
{
    double num1, num2;
    cout << "\nEnter First number :";
    cin >> num1;
    cout << "\nEnter Second number :";
    cin >> num2;

    double result = num1 + num2;
    cout << "\nAddition : " << result;
}

void getSubstraction()
{
    double num1, num2;
    cout << "\nEnter First number :";
    cin >> num1;
    cout << "\nEnter second number :";
    cin >> num2;

    double subtraction = num1 - num2;
    cout << "\nSubstraction : " << subtraction;
}

void getMultiplication()
{
    double num1, num2;
    cout << "\nEnter first number :";
    cin >> num1;
    cout << "\nEnter second number :";
    cin >> num2;

    double multiplication = num1 * num2;
    cout << "\nMultiplication : " << multiplication;
}

void getDivision()
{
    double numerator, denominator;
    cout << "\nEnter number: ";
    cin >> numerator;
    cout << "\nEnter denominator : ";
    cin >> denominator;
    double division;
    if ((denominator == 0))
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