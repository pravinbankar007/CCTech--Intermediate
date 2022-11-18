#include <iostream>
#include <cassert>

using namespace std;

bool checkPrimeNumber(int num)
{
    if (num <= 1)
        return false;

    for (int i = 2; i < num / 2; i++)
        if (num % i == 0)
            return false;

    return true;
}

int main()
{

    /*int num = 0;
    cout << "enter the number: ";
    cin >> num;
    if (checkPrimeNumber(num)) {
        cout << "given number is prime" << endl;
    }
    else {
        cout << "given number is not a prime" << endl;
    }*/

    assert(!checkPrimeNumber(-1));
    assert(!checkPrimeNumber(0));
    assert(!checkPrimeNumber(1));
    assert(checkPrimeNumber(2));
    assert(checkPrimeNumber(5));
    assert(!checkPrimeNumber(20));

    return 0;
}