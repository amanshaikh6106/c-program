#include <stdio.h>
#include <string.h>

#define MAX 50

struct Car {
    int id;
    char name[20];
    char model[20];
    float rent;
    int available;  
};

struct Car car[MAX];  

int count = 0;        
void addCar();
void showCars();
void rentCar();
void returnCar();
void searchCar();
void updateCar();
void deleteCar();

int main() {
    int choice;

    do {
        printf("\n===== CAR RENTAL MANAGEMENT SYSTEM =====\n");
        printf("1. Add Car\n");
        printf("2. Display All Cars\n");
        printf("3. Rent a Car\n");
        printf("4. Return a Car\n");
        printf("5. Search Car\n");
        printf("6. Update Car\n");
        printf("7. Delete Car\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addCar(); break;
            case 2: showCars(); break;
            case 3: rentCar(); break;
            case 4: returnCar(); break;
            case 5: searchCar(); break;
            case 6: updateCar(); break;
            case 7: deleteCar(); break;
            case 8: printf("Exiting program. Goodbye!\n"); break;
            default: printf("Invalid choice. Try again.\n");
        }

    } while (choice != 8);

    return 0;
}

void addCar() {
    if (count >= MAX) {
        printf("Car list is full!\n");
        return;
    }

    printf("Enter Car ID: ");
    scanf("%d", &car[count].id);

    printf("Enter Car Name: ");
    scanf("%s", car[count].name);

    printf("Enter Model: ");
    scanf("%s", car[count].model);

    printf("Enter Rent Per Day: ");
    scanf("%f", &car[count].rent);

    car[count].available = 1;
    count++;

    printf("Car added successfully!\n");
}

void showCars() {
    int i;

    if (count == 0) {
        printf("No cars available.\n");
        return;
    }

    printf("\nID\tName\tModel\tRent\tStatus\n");
    for (i = 0; i < count; i++) {
        printf("%d\t%s\t%s\t%.2f\t%s\n",
               car[i].id, car[i].name, car[i].model, car[i].rent,
               car[i].available == 1 ? "Available" : "Rented");
    }
}

void rentCar() {
    int id, i, found = 0;

    printf("Enter Car ID to rent: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++) {
        if (car[i].id == id) {
            found = 1;
            if (car[i].available == 1) {
                car[i].available = 0;
                printf("Car rented successfully!\n");
            } else {
                printf("Sorry, this car is already rented.\n");
            }
        }
    }

    if (found == 0) {
        printf("Car not found.\n");
    }
}

void returnCar() {
    int id, i, found = 0, days;
    float bill;

    printf("Enter Car ID to return: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++) {
        if (car[i].id == id) {
            found = 1;
            if (car[i].available == 0) {
                printf("Enter number of days rented: ");
                scanf("%d", &days);
                bill = days * car[i].rent;
                car[i].available = 1;
                printf("Car returned successfully!\n");
                printf("Total Bill = %.2f\n", bill);
            } else {
                printf("This car was not rented.\n");
            }
        }
    }

    if (found == 0) {
        printf("Car not found.\n");
    }
}

void searchCar() {
    int id, i, found = 0;

    printf("Enter Car ID to search: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++) {
        if (car[i].id == id) {
            found = 1;
            printf("Car ID: %d\n", car[i].id);
            printf("Name: %s\n", car[i].name);
            printf("Model: %s\n", car[i].model);
            printf("Rent Per Day: %.2f\n", car[i].rent);
            printf("Status: %s\n", car[i].available == 1 ? "Available" : "Rented");
        }
    }

    if (found == 0) {
        printf("Car not found.\n");
    }
}

void updateCar() {
    int id, i, found = 0, ch;

    printf("Enter Car ID to update: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++) {
        if (car[i].id == id) {
            found = 1;

            printf("\nWhat do you want to update?\n");
            printf("1. Name\n");
            printf("2. Model\n");
            printf("3. Rent Per Day\n");
            printf("4. All\n");
            printf("Enter choice: ");
            scanf("%d", &ch);

            switch (ch) {
                case 1:
                    printf("Enter new Name: ");
                    scanf("%s", car[i].name);
                    break;
                case 2:
                    printf("Enter new Model: ");
                    scanf("%s", car[i].model);
                    break;
                case 3:
                    printf("Enter new Rent Per Day: ");
                    scanf("%f", &car[i].rent);
                    break;
                case 4:
                    printf("Enter new Name: ");
                    scanf("%s", car[i].name);
                    printf("Enter new Model: ");
                    scanf("%s", car[i].model);
                    printf("Enter new Rent Per Day: ");
                    scanf("%f", &car[i].rent);
                    break;
                default:
                    printf("Invalid choice. Nothing updated.\n");
                    return;
            }

            printf("Car details updated successfully!\n");
        }
    }

    if (found == 0) {
        printf("Car not found.\n");
    }
}

void deleteCar() {
    int id, i, j, found = 0;

    printf("Enter Car ID to delete: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++) {
        if (car[i].id == id) {
            found = 1;
            for (j = i; j < count - 1; j++) {
                car[j] = car[j + 1];
            }
            count--;
            printf("Car deleted successfully!\n");
        }
    }

    if (found == 0) {
        printf("Car not found.\n");
    }
}