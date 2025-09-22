#include <stdio.h>

void Ft_affiche_info()
{

    char fullName[20];
    int age;
    char sex;
    char email_address[50];


    printf("enter your full name:\n");
    // scanf("%s\n", fullName);
    fgets(fullName, sizeof(fullName), stdin);

    printf("enter your age:\n");
    scanf("%i", &age);
    getchar();

    printf("enter your gender M or F:\n");
    scanf(" %c", &sex);
    getchar();

    printf("enter your email address: ");
    // scanf("%s\n", email_address);
    fgets(email_address, sizeof(email_address), stdin);

}

int main()
{
    Ft_affiche_info();
    return 0;

}