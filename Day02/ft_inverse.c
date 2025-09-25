#include <stdio.h>

void ft_inverse(int arr[], int n)
{
    int temp;
    int i = 0;
    int x = n - 1;
    while (i < x)
    {
        temp = arr[i];
        arr[i] = arr[x];
        arr[x] = temp;
        i++;
        x--;
    }

}

int main()
{
    int arr[] = {3, 5, 4, 7, 1};
    int n = sizeof(arr)/sizeof(arr[0]);


    ft_inverse(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    

}