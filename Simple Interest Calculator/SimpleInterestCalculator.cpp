#include <iostream>

using namespace std;

class SimpleInterest
{
private:
    float principal_amount, rate, time, result;

public:
    void takeInputs()
    {

        cout << "\nEnter Principal Amount : ";
        cin >> principal_amount;
        cout << "\nEnter Rate of Interest : ";
        cin >> rate;
        cout << "\nEnter Time Period (in years) : ";
        cin >> time;
    }

    void calculateSimpleInterest()
    {
        if (!(principal_amount <= 0 || rate <= 0 || time <= 0))
        {
            result = (principal_amount * rate * time) / 100;
            cout << "\nSimple Interest Amount : " << result;
        }

        else
        {
            cout << "\n\nInvalid input , Please enter valid input ";
        }
    }
};

int main()
{
    SimpleInterest obj;

    obj.takeInputs();

    obj.calculateSimpleInterest();

    return 0;
}