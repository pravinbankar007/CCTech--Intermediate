
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void printAnagramPermutations(string str)
{
    sort(str.begin(), str.end());

    do
    {
        cout << str << endl;
    } while (next_permutation(str.begin(), str.end()));
}

int main()
{
    string str;

    cout << "Enter a string : ";

    getline(cin, str);

    if (str.length() == 0)
    {
        cout << "Given string is empty";
    }
    else
        cout << "Potential Anagrams of given string are : \n";
    printAnagramPermutations(str);

    return 0;
}