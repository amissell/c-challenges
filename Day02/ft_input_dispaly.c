#include <stdio.h>


int main()
{
    int element[3];
    printf("enter elements: \n");
    for (int i = 0; i < 3; i++)
    {
        printf("elements %d: ", i);
        scanf("%d", &element[i]);
    }

    for (int i = 0; i< 3; i++)
    {
        printf("%d \n", element[i]);
    }


}