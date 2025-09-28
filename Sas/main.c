#include <stdio.h>
#include <strings.h> 

#define CONTACT 100

char name[CONTACT][50];
char address_email[CONTACT][50];
char phone_number[CONTACT][50];
int count_contact = 0;

void remove_newline(char *str) {
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}

void ft_add_contact() {
    if (count_contact >= CONTACT) {
        printf("Contact list full!\n");
        return;
    }

    printf("Enter the name: ");
    fgets(name[count_contact], sizeof(name[count_contact]), stdin);
    remove_newline(name[count_contact]);

    printf("Enter phone number: ");
    fgets(phone_number[count_contact], sizeof(phone_number[count_contact]), stdin);
    remove_newline(phone_number[count_contact]);

    printf("Enter email address: ");
    fgets(address_email[count_contact], sizeof(address_email[count_contact]), stdin);
    remove_newline(address_email[count_contact]);

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
        printf("Name: %s\n", name[i]);
        printf("Phone: %s\n", phone_number[i]);
        printf("Email: %s\n", address_email[i]);
    }
}

void ft_search_contact() {
    char search_name[50];
    int found = 0;

    printf("Enter name to search: ");
    fgets(search_name, sizeof(search_name), stdin);
    remove_newline(search_name);

    for (int i = 0; i < count_contact; i++) {
        if (strcasecmp(name[i], search_name) == 0) {
            printf("Contact found!\n");
            printf("Name: %s\n", name[i]);
            printf("Phone: %s\n", phone_number[i]);
            printf("Email: %s\n", address_email[i]);
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
    fgets(search_name, sizeof(search_name), stdin);
    remove_newline(search_name);

    for (int i = 0; i < count_contact; i++) {
        if (strcasecmp(name[i], search_name) == 0) {
            printf("Contact found! Enter new details:\n");

            printf("New name: ");
            fgets(name[i], sizeof(name[i]), stdin);
            remove_newline(name[i]);

            printf("New phone number: ");
            fgets(phone_number[i], sizeof(phone_number[i]), stdin);
            remove_newline(phone_number[i]);

            printf("New email address: ");
            fgets(address_email[i], sizeof(address_email[i]), stdin);
            remove_newline(address_email[i]);

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
    fgets(search_name, sizeof(search_name), stdin);
    remove_newline(search_name);

    for (int i = 0; i < count_contact; i++) {
        if (strcasecmp(name[i], search_name) == 0) {
            for (int j = i; j < count_contact - 1; j++) {
                strcpy(name[j], name[j + 1]);
                strcpy(phone_number[j], phone_number[j + 1]);
                strcpy(address_email[j], address_email[j + 1]);
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

// Menu
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
    char temp[10];

    while (1) {
        display_menu();
        if (fgets(temp, sizeof(temp), stdin) != NULL)
            sscanf(temp, "%d", &choice);

        switch (choice) {
            case 1: ft_add_contact(); break;
            case 2: ft_display_contact(); break;
            case 3: ft_search_contact(); break;
            case 4: ft_update(); break;
            case 5: ft_delete(); break;
            case 6: printf("Exiting...\n"); return 0;
            default: printf("Invalid choice! Choose from 1-6.\n");
        }
    }

    return 0;
}
