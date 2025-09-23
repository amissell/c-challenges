#include <stdio.h>
void ft_nb_multiple(int nb)
{
    // int x;
    // x = 1;
    int res;
    for (int i = 1; i < 9; i++)
    {
        res = nb * i;
        // x += 1;
        printf("%d x %d = %d\n", nb, i, res);
    }
}
int main ()
{
    int nb = 4;
    int x = 1;
    int result;
    ft_nb_multiple(nb);
    return 0;
}
