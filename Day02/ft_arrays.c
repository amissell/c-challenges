#include <stdio.h>

int main()
{
    int x[] = {1, 9, 4, 2, 6};
    for (int i = 1; i < sizeof(x)/sizeof(x[0]); i++)
    {
        printf("%d\n", x[i]);   
    }
    // printf("%d", x[0]);
}

// int main()
// {
//     int x = 9;
//     printf("%d", x);
// }

