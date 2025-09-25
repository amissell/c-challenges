#include <stdio.h>

void ft_replace(int arr[], int index, int new_value)
{
    arr[index] = new_value;
}


int main()
{
    int arr[] = {1, 3, 4, 5, 6};
    int x = sizeof(arr) / sizeof(arr[0]);
    int a = 2;
    int new = 2;
    ft_replace(arr, a, new);
    for (int i = 0; i < x; i++)
    {
        printf("%d", arr[i]);
    }
    
}


// #include <stdio.h>

// void changeArray(int arr[]) {
//     arr[0] = 99;
// }

// int main() {
//     int arr[3] = {1, 2, 3};
//     changeArray(arr);
//     printf("arr[0] = %d\n", arr[2]);
//     return 0;
// }
