#include <stdio.h>

void ft_copy (int arr1[], int arr2[], int x)
{
    for (int i = 0; i < x; i++)
    {
        arr2[i] = arr1[i];
    }
}

int main()
{
    int arr1[] = {1, 2, 7, 4, 9};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[n];
    ft_copy(arr1, arr2, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr2[i]);
    }
    return 0;

}