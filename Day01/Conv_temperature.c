#include <stdio.h>


float ft_conv_temp(int c)
{
    float k = c + 273.15;
    return k;
}

int main()
{
    float x = 100;
    printf("result is %.2f", ft_conv_temp(x));
    return 0;
}