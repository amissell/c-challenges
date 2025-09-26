#include <stdio.h>


#define CONTACT 100

char name[CONTACT][50];
char address_email[CONTACT][50];
int phone_number[CONTACT][50];
int count_contact = 0;





void ft_add_contact()
{

        printf("enter the name please: ");
        scanf("%s", name[count_contact]);
        printf("Enter the phone number:");
        scanf("%i", phone_number[count_contact]);
        printf("Enter address email: ");
        scanf("%s", address_email[count_contact]);

        count_contact++;
}
void ft_display_contact()
{

}

void ft_serach_contact()
{

}

void ft_update()
{

}

void ft_delete()
{

}
void display_menu()
{
    printf("1. add a contact\n");
    printf("2. display contact\n");
    printf("3. serach contact\n");
    printf("4. update contact\n");
    printf("5. delete contact\n");
    printf("6. exit\n");
    printf("your choice: ");
}


int main()
{
    int choice;
    while(1)
    {
        scanf("%d", &choice);

        if (choice == 1)
        {
            ft_add_contact();
        }
        else if(choice == 2)
        {
            ft_display_contact();
        }
        else if (choice == 3)
        {
            void ft_serach_contact();
        }
        else if (choice == 4)
        {
            ft_update();
        }
        else if(choice == 5)
        {
            ft_delete();
        }
        else if(choice == 6)
        {
            printf("done\n");
            break;
        }
        else
            printf("khtar chi ra9em kayn f liste\n");
    }
    return 0;
}