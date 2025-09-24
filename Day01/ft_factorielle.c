#include <stdio.h>

int ft_factorilelle(unsigned int n)
{
    int fact = 1;
    int i = 1;
    while(i <= n)
    {
        fact = fact * i;
        i++;
    }
    return fact;
}

int main ()
{
    unsigned int nb = 5;
    printf("the factoriel %d: " ,ft_factorilelle(nb));
}