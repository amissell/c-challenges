#include <stdio.h>
#include <string.h>

#define MAX_PLANES 100

typedef struct {
    int id;
    char model[50];
    int capacity;
    char status[20];
} Plane;

typedef struct {
    char name[50];
    Plane fleet[MAX_PLANES];
    int nbPlanes;
} Airport;

Airport airport;
int nextId = 1;

void addPlane() {
    if (airport.nbPlanes >= MAX_PLANES) {
        printf("Fleet is full!\n");
        return;
    }

    Plane p;
    p.id = nextId++;
    
    printf("Enter model: ");
    scanf("%s", p.model);

    printf("Enter capacity: ");
    scanf("%d", &p.capacity);

    printf("Enter status (Available/InMaintenance/InFlight): ");
    scanf("%s", p.status);

    airport.fleet[airport.nbPlanes] = p;
    airport.nbPlanes++;

    printf("Plane added!\n");
}

void displayPlanes() {
    if (airport.nbPlanes == 0) {
        printf("No planes in the airport.\n");
        return;
    }

    printf("\nList of planes at %s:\n", airport.name);
    printf("%-5s %-15s %-10s %-15s\n", "ID", "Model", "Capacity", "Status");
    for (int i = 0; i < airport.nbPlanes; i++) {
        printf("%-5d %-15s %-10d %-15s\n",airport.fleet[i].id,airport.fleet[i].model,airport.fleet[i].capacity,airport.fleet[i].status);
    }
}

void searchPlane() {
    int id;
    printf("Enter ID to search: ");
    scanf("%d", &id);

    int found = 0;
    for (int i = 0; i < airport.nbPlanes; i++)
    {
        if (airport.fleet[i].id == id) 
        {
            printf("Found: %s, %d seats, %s\n",airport.fleet[i].model,airport.fleet[i].capacity,airport.fleet[i].status);
            found = 1;
            break;
        }
    }
    if (!found)
    {
        printf("Plane not found.\n");
    }
}

void updatePlane() {
    int id;
    printf("Enter ID of plane to update: ");
    scanf("%d", &id);

    int found = 0;
    for (int i = 0; i < airport.nbPlanes; i++) {
        if (airport.fleet[i].id == id) {
            printf("Enter new model: ");
            scanf("%s", airport.fleet[i].model);

            printf("Enter new capacity: ");
            scanf("%d", &airport.fleet[i].capacity);

            printf("Enter new status (Available/InMaintenance/InFlight): ");
            scanf("%s", airport.fleet[i].status);

            printf("Plane updated!\n");
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Plane not found.\n");
    }
}

void deletePlane() {
    int id;
    printf("Enter ID to delete: ");
    scanf("%d", &id);

    int found = 0;
    for (int i = 0; i < airport.nbPlanes; i++) {
        if (airport.fleet[i].id == id) {
            for (int j = i; j < airport.nbPlanes - 1; j++) {
                airport.fleet[j] = airport.fleet[j + 1];
            }
            airport.nbPlanes--;
            found = 1;
            printf("Plane deleted!\n");
            break;
        }
    }
    if (!found) {
        printf("Plane not found.\n");
    }
}

void sortPlanesByModel() {
    if (airport.nbPlanes < 2) {
        printf("Not enough planes to sort.\n");
        return;
    }

    for (int i = 0; i < airport.nbPlanes - 1; i++) {
        for (int j = 0; j < airport.nbPlanes - i - 1; j++) {
            if (strcasecmp(airport.fleet[j].model, airport.fleet[j + 1].model) > 0) {
                Plane temp = airport.fleet[j];
                airport.fleet[j] = airport.fleet[j + 1];
                airport.fleet[j + 1] = temp;
            }
        }
    }
    printf("Planes sorted by model alphabetically!\n");
    displayPlanes();
}

int main() {
    airport.nbPlanes = 0;

    printf("Enter airport name: ");
    scanf("%s", airport.name);

    int choice;

    while (1) {
        printf("\n--- Airport Management ---\n");
        printf("1. Add plane\n");
        printf("2. Display planes\n");
        printf("3. Search plane by ID\n");
        printf("4. Update plane by ID\n");
        printf("5. Delete plane by ID\n");
        printf("6. Sort planes by model alphabetically\n");
        printf("0. Exit\n");
        printf("Your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            addPlane();
        } else if (choice == 2) {
            displayPlanes();
        } else if (choice == 3) {
            searchPlane();
        } else if (choice == 4) {
            updatePlane();
        } else if (choice == 5) {
            deletePlane();
        } else if (choice == 6) {
            sortPlanesByModel();
        } else if (choice == 0) {
            printf("Goodbye!\n");
            break;
        } else {
            printf("Invalid choice.\n");
        }
    }

    return 0;
}
