#include <stdio.h>

int main()
{
    int n;
    printf("enter the nb of elements you want: ");
    scanf("%d ", &n);
    int arr[n];
    // int size = sizeof(arr)/sizeof(arr[0];
    printf("enter elements: \n");
    for (int i = 0; i < n; i++ )
    {
        printf("element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("the min: %d", min);
}