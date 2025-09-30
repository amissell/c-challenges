#include <stdio.h>
#include <string.h>

#define CONTACT 100

typedef struct 
{
    char name[50];
    char phone_number[50];
    char address_email[50];
    
}contact;
contact contacts[CONTACT];

int count_contact = 0;

void ft_add_contact() {
    if (count_contact >= CONTACT) {
        printf("Contact list full!\n");
        return;
    }

    printf("Enter the name: ");
    scanf(" %[^\n]", contacts[count_contact].name);
    getchar(); 

    printf("Enter phone number: ");
    scanf(" %[^\n]", contacts[count_contact].phone_number);
    getchar();

    printf("Enter email address: ");
    scanf(" %[^\n]", contacts[count_contact].address_email);
    getchar();

    count_contact++;
    printf("Contact added successfully!\n");
}

void ft_display_contact() {
    if (count_contact == 0) {
        printf("No contacts found.\n");
        return;
    }

    for (int i = 0; i < count_contact; i++) {
        printf("_____________________________\n");
        printf("Contact %d\n", i + 1);
        printf("Name: %s\n", contacts[i].name);
        printf("Phone: %s\n", contacts[i].phone_number);
        printf("Email: %s\n", contacts[i].address_email);
    }
}

void ft_search_contact() {
    char search_name[50];
    int found = 0;

    printf("Enter name to search: ");
    scanf(" %[^\n]", search_name);
    getchar();

    for (int i = 0; i < count_contact; i++) {
        if (strcasecmp(contacts[i].name, search_name) == 0) {
            printf("Contact found!\n");
            printf("Name: %s\n", contacts[i].name);
            printf("Phone: %s\n", contacts[i].phone_number);
            printf("Email: %s\n", contacts[i].address_email);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Contact not found.\n");
}

void ft_update() {
    char search_name[50];
    int found = 0;

    printf("Enter the name of the contact to update: ");
    scanf(" %[^\n]", search_name);
    getchar();

    for (int i = 0; i < count_contact; i++) {
        if (strcasecmp(contacts[i].name, search_name) == 0) {
            printf("Contact found! Enter new details:\n");

            printf("New name: ");
            scanf(" %[^\n]", contacts[i].name);
            getchar();

            printf("New phone number: ");
            scanf(" %[^\n]", contacts[i].phone_number);
            getchar();

            printf("New email address: ");
            scanf(" %[^\n]", contacts[i].address_email);
            getchar();

            printf("Contact updated successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Contact not found.\n");
}

void ft_delete() {
    char search_name[50];
    int found = 0;

    printf("Enter the name of the contact to delete: ");
    scanf(" %[^\n]", search_name);
    getchar();

    for (int i = 0; i < count_contact; i++) {
        if (strcasecmp(contacts[i].name, search_name) == 0) {
            for (int j = i; j < count_contact - 1; j++) 
            {
                strcpy(contacts[j].name, contacts[j + 1].name);
                strcpy(contacts[j].phone_number, contacts[j + 1].phone_number);
                strcpy(contacts[j].address_email, contacts[j + 1].address_email);
            }
            count_contact--;
            printf("Contact deleted successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Contact not found.\n");
}

void display_menu() {
    printf("\n1. Add a contact\n");
    printf("2. Display contacts\n");
    printf("3. Search contact\n");
    printf("4. Update contact\n");
    printf("5. Delete contact\n");
    printf("6. Exit\n");
    printf("Your choice: ");
}

int main() {
    int choice;

    while (1) {
        display_menu();
        scanf("%d", &choice);
        getchar(); 
        switch (choice) {
            case 1: ft_add_contact(); break;
            case 2: ft_display_contact(); break;
            case 3: ft_search_contact(); break;
            case 4: ft_update(); break;
            case 5: ft_delete(); break;
            case 6: printf("Exiting...\n"); return 0;
            default: printf("Invalid choice.\n");
        }
    }
    return 0;
}