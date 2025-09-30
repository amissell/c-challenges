#include <stdio.h>

int ft_nb_sum(int n)
{
    int res;
    int i = 0;
    while (i <= n)
    {
        res = res + i;
        i++;

    }
    return res;
}

int main()
{
    int x = 6;
    printf("%d\n", ft_nb_sum(x));
}