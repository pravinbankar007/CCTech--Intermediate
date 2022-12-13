
#include <iostream>
#include <vector>
#include <string>
#include "sort_string_by_length.h"

using namespace std;

int main()
{
    string line;
    vector<string> lines;

    while (getline(cin, line))
        lines.push_back(line);

    lines = sort_string_by_length(lines);

    for (auto line : lines)
        cout << line << endl;

    return 0;
}
