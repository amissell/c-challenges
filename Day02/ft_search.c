#include <stdio.h>


int main()
{
    int arr[] = {3, 5, 7, 7, 1};
    int x = sizeof(arr) / sizeof(arr[0]);
    int key = 7;
    int found = 0;
    for(int i = 0; i < x; i++)
    {
        if (arr[i] == key)
        {
            found = i;
            break;
        }
        // printf("%d", found);
        // else
        //     return -1;
    }

    if (found != 0)
    {
        printf("the key is %d and found it in %d", key, found);
    }
    else
        printf ("not found");
}