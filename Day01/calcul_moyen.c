#include <stdio.h>

int ft_calcu_moyen(int a, int b, int c)
{
    int moyen;
    moyen = (a * b * c)^(1/3);
    return moyen;
}

int main()
{
    int x , y, z;
    x = 2;
    y = 3;
    z = 5;

    printf("the result: %d", ft_calcu_moyen(x , y , z));
}