#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    if (argc == 1)
    {
        cout << "\n";
    }

    else
    {

        for (int i = 1; i < argc; i++)
        {
            cout << argv[i] << " ";
        }
        cout << endl;
    }
    return 0;
}