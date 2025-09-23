#include<stdio.h>

char ft_paire_impaire(int nb)
{
    if ((nb % 2) == 0 )
    {
        printf ("even");
    }
    else
        printf("odd");
}


int main()
{
    int x = 44;
    ft_paire_impaire(x);

    return 0;
}