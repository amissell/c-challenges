#include <stdio.h>

int main()
{
    int arr[5] = {2, 12, 5, 3, 9};
    int max = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    // return max;
    printf("the max number: %d", max);

}