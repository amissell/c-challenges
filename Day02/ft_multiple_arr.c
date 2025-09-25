#include <stdio.h>


int main()
{
    int x;

    int factor;
    printf("put the nember of elements: ");
    scanf("%d", &x);

    printf("the elments: ");
    int arr[x];
    for (int  i = 0; i < x; i++)
    {
        printf("element%d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the multiplication factor: ");
    scanf("%d", &factor);

    for (int i = 0; i < x; i++)
    {
        arr[i] *= factor;
    }
    for(int i =0; i < x; i++){
        printf("the new arr: %d", arr[i]);

    }
}