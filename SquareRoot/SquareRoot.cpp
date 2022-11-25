#include <iostream>
#include <cmath>

using namespace std;

class SquareRoot
{
public:
    double num;

    void getSquareRoot()
    {

        cout << "Enter a number : ";

        cin >> num;

        if (num >= 0)
        {
            cout << "Square root of given number : " << sqrt(num);
        }

        else
        {
            throw runtime_error("Invalid input : can't find the square root of negative number ");
        }
    }
};

int main()
{

    SquareRoot sq1;
    try
    {
        sq1.getSquareRoot();
    }
    catch (runtime_error &excep)
    {
        cerr << excep.what();
    }

    return 0;
}
