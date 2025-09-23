#include <stdio.h>

char ft_dispaly_temparature(int c)
{
    if (c < 0)
    {
        printf("solide\n");
    }
    else if (c < 100 && c >= 0)
    {
        printf("liquide");
    }
    else
        printf("gaz");

}


int main()
{
    int x = -1;
    ft_dispaly_temparature(x);
    
}