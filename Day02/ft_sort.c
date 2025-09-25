

#include <stdio.h>

void ft_sort(int arr[], int x)
{
    
    for (int i = 0; i < x; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < x - 1; i++)
    {
        for (int j = 0; j < x - i - 1; j++)

        {
            
            if (arr[j] > arr[j + 1])
            {
                int a = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = a;
            }
        }
    }
}

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    ft_sort(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


// tmsse7 mn arrays
// tsearch farrays 
// trje3 matalan 00 lwl olokherin lekher  