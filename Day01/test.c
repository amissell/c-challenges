#include <stdio.h>



int ft_sum(int nb)
{

    int sum;
    sum = (((nb /1000)%10) + ((nb/100)%10) + ((nb / 10)%10) + ((nb /1)%10));
    return sum;
}


int main()
{
    int nb = 1234;
    printf("results: %d", ft_sum(nb));
}