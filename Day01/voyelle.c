#include <stdio.h>
char ft_voyelle(char c)
{
    switch (c)
    {
        case 'a':
        printf("voyelle");
        break;
        case 'e':
        printf("voyelle");
        break;
        case 'i':
        printf("voyelle");
        break;
        case 'o':
        printf("voyelle");
        break;
        case 'u':
        printf("voyelle");
        break;
        case 'y':
        printf("voyelle");
        break;
    }

}


int main()
{
    char  x = 'i';
    ft_voyelle(x);
    return 0;
}