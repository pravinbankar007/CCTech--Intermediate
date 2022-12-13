#include <vector>
#include <map>
#include <string>

using namespace std;

vector<string> sort_string_by_length(vector<string> lines)
{
    multimap<int, string> sorted_lines_by_length;

    for (auto line : lines)
        sorted_lines_by_length.insert({line.length(), line});

    lines.clear();

    multimap<int, string>::iterator itr;
    for (auto itr = sorted_lines_by_length.begin(); itr != sorted_lines_by_length.end(); ++itr)
        lines.push_back(itr->second);

    return lines;
}
