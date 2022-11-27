#include <stdio.h>
#include "MyMath.h"

int main()
{
    printf("Hello world\n");
    auto value = 0;
    auto power = 0;
    printf("Value are:");
    scanf("%d", &value);
    printf("In power of:");
    scanf("%d", &power);
    printf("%d power of %d is %d\n", value, power, Power(value, power));
    printf("The end!");
    return 0;
}