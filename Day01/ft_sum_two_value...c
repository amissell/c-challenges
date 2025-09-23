#include <stdio.h>

int ft_sum_two_value(int a, int b)
{
    if (a == b)
    {
        printf("the sum: %d", (a + b) * 3);
    }
}

int main()
{
    int x = 4;
    int y = 3;
    ft_sum_two_value(x, y);
    return 0;
}