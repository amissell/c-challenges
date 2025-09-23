#include <stdio.h>

int ft_nombre_reverse(int num)
{
    // int rev;
    // rev = ((num / 1000)%10, (num / 100)%10, (num / 10)%10, (num / 1)%10);

    printf ("%d" ,num %10);
    printf ("%d" ,(num/10)%10);
    printf ("%d" ,(num/100) %10);
    printf ("%d" ,(num/1000) %10);

    // return rev;
}

int main()
{
    int num = 1234;
    ft_nombre_reverse(num);
    // getchar();
}