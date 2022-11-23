#include <iostream>
#include <cmath>
#include <cfloat>

using namespace std;

void floatToInt(float float_num)
{
    int int_num;

    if (isnan(float_num) || size_t(INT_MAX) < log2f(fabsf(float_num)) || float_num != 0.0f && fabsf(float_num) < FLT_MIN)
    {
        cout << "Math error ";
    }
    else
    {
        int_num = float_num;
        cout << "float to int conversion : " << int_num << endl;
    }
}

void intToFloat(int int_num)
{
    float float_num;

    if (isnan(int_num) || size_t(FLT_MAX) < log2f(abs(int_num)) || (int_num != 0 && abs(int_num) < INT_MIN))
    {
        cout << "Math error ";
    }
    else
    {
        float_num = int_num;
        cout << "int to float conversion : " << float_num << endl;
    }
}

int main()
{
    floatToInt(541.1);
    intToFloat(25347);

    return 0;
}
