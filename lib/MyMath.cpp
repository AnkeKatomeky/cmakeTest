#include "MyMath.h"

int Power(int value, int power)
{
    int result = value;
    for (int i = 0; i < power - 1; i++)
    {
        result *= value;
    }
    return result;
}