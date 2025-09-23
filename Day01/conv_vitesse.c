#include <stdio.h>

int ft_vitesse_conv(int km)
{
    int mtr = km * 0.27778;
    return mtr;
}

int main ()
{
    int x = 10;
    printf ("the result : %d", ft_vitesse_conv(x));
}