#include <stdio.h>
#include <string.h>

#define MAX_BUS 20
#define MAX_PASS 100

struct Bus {
    int busNo;
    char name[20];
    char source[15];
    char destination[15];
    int totalSeats;
    int availSeats;
};

struct Passenger {
    int pid;
    char name[20];
    int age;
    int seatNo;
    int busNo;
};

struct Bus bus[MAX_BUS];
int busCount = 0;

struct Passenger pass[MAX_PASS];
int passCount = 0;

int nextId = 1; 

void addBus();
void showBuses();
void bookTicket();
void cancelTicket();
void searchPassenger();
void checkSeats();
void showPassengers();
void generateTicket();

int main() {
    int choice;

    do {
        printf("\n===== BUS RESERVATION SYSTEM =====\n");
        printf("1. Add Bus\n");
        printf("2. Display Buses\n");
        printf("3. Book Ticket\n");
        printf("4. Cancel Ticket\n");
        printf("5. Search Passenger\n");
        printf("6. Check Available Seats\n");
        printf("7. Display Passenger Records\n");
        printf("8. Generate Ticket\n");
        printf("9. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addBus(); break;
            case 2: showBuses(); break;
            case 3: bookTicket(); break;
            case 4: cancelTicket(); break;
            case 5: searchPassenger(); break;
            case 6: checkSeats(); break;
            case 7: showPassengers(); break;
            case 8: generateTicket(); break;
            case 9: printf("Exiting program. Goodbye!\n"); break;
            default: printf("Invalid choice. Try again.\n");
        }

    } while (choice != 9);

    return 0;
}

void addBus() {
    if (busCount >= MAX_BUS) {
        printf("Bus list is full!\n");
        return;
    }

    printf("Enter Bus Number: ");
    scanf("%d", &bus[busCount].busNo);

    printf("Enter Bus Name: ");
    scanf("%s", bus[busCount].name);

    printf("Enter Source: ");
    scanf("%s", bus[busCount].source);

    printf("Enter Destination: ");
    scanf("%s", bus[busCount].destination);

    printf("Enter Total Seats: ");
    scanf("%d", &bus[busCount].totalSeats);

    bus[busCount].availSeats = bus[busCount].totalSeats;
    busCount++;

    printf("Bus Added Successfully!\n");
}

void showBuses() {
    int i;

    if (busCount == 0) {
        printf("No buses available.\n");
        return;
    }

    printf("\nBusNo\tName\tSource\tDest\tTotal\tAvailable\n");
    for (i = 0; i < busCount; i++) {
        printf("%d\t%s\t%s\t%s\t%d\t%d\n",
               bus[i].busNo, bus[i].name, bus[i].source,
               bus[i].destination, bus[i].totalSeats, bus[i].availSeats);
    }
}

void bookTicket() {
    char name[20];
    int age, busNo, i, found = 0;

    printf("Enter Passenger Name: ");
    scanf("%s", name);

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter Bus Number: ");
    scanf("%d", &busNo);

    for (i = 0; i < busCount; i++) {
        if (bus[i].busNo == busNo) {
            found = 1;
            if (bus[i].availSeats > 0) {
                strcpy(pass[passCount].name, name);
                pass[passCount].age = age;
                pass[passCount].busNo = busNo;
                pass[passCount].pid = nextId;
                pass[passCount].seatNo = bus[i].totalSeats - bus[i].availSeats + 1;

                bus[i].availSeats--;

                printf("Ticket Booked Successfully!\n");
                printf("Passenger ID: %d\n", nextId);
                printf("Seat Number: %d\n", pass[passCount].seatNo);
                printf("Available Seats: %d\n", bus[i].availSeats);

                nextId++;
                passCount++;
            } else {
                printf("No seats available on this bus.\n");
            }
        }
    }

    if (found == 0) {
        printf("Bus not found.\n");
    }
}

void cancelTicket() {
    int pid, i, j, k, found = 0;

    printf("Enter Passenger ID to cancel: ");
    scanf("%d", &pid);

    for (i = 0; i < passCount; i++) {
        if (pass[i].pid == pid) {
            found = 1;

            for (j = 0; j < busCount; j++) {
                if (bus[j].busNo == pass[i].busNo) {
                    bus[j].availSeats++;
                }
            }

            for (k = i; k < passCount - 1; k++) {
                pass[k] = pass[k + 1];
            }
            passCount--;

            printf("Ticket Cancelled Successfully!\n");
        }
    }

    if (found == 0) {
        printf("Passenger not found.\n");
    }
}

void searchPassenger() {
    int pid, i, found = 0;

    printf("Enter Passenger ID: ");
    scanf("%d", &pid);

    for (i = 0; i < passCount; i++) {
        if (pass[i].pid == pid) {
            found = 1;
            printf("Passenger ID: %d\n", pass[i].pid);
            printf("Name: %s\n", pass[i].name);
            printf("Age: %d\n", pass[i].age);
            printf("Bus Number: %d\n", pass[i].busNo);
            printf("Seat Number: %d\n", pass[i].seatNo);
        }
    }

    if (found == 0) {
        printf("Passenger not found.\n");
    }
}

void checkSeats() {
    int busNo, i, found = 0;

    printf("Enter Bus Number: ");
    scanf("%d", &busNo);

    for (i = 0; i < busCount; i++) {
        if (bus[i].busNo == busNo) {
            found = 1;
            printf("Bus Name: %s\n", bus[i].name);
            printf("Total Seats: %d\n", bus[i].totalSeats);
            printf("Available Seats: %d\n", bus[i].availSeats);
        }
    }

    if (found == 0) {
        printf("Bus not found.\n");
    }
}

void showPassengers() {
    int i;

    if (passCount == 0) {
        printf("No passenger records found.\n");
        return;
    }

    printf("\nID\tName\tAge\tSeat\tBusNo\n");
    for (i = 0; i < passCount; i++) {
        printf("%d\t%s\t%d\t%d\t%d\n",
               pass[i].pid, pass[i].name, pass[i].age,
               pass[i].seatNo, pass[i].busNo);
    }
}

void generateTicket() {
    int pid, i, j, found = 0;

    printf("Enter Passenger ID: ");
    scanf("%d", &pid);

    for (i = 0; i < passCount; i++) {
        if (pass[i].pid == pid) {
            found = 1;

            for (j = 0; j < busCount; j++) {
                if (bus[j].busNo == pass[i].busNo) {
                    printf("\n----- BUS TICKET -----\n");
                    printf("Passenger ID: %d\n", pass[i].pid);
                    printf("Name: %s\n", pass[i].name);
                    printf("Age: %d\n", pass[i].age);
                    printf("Bus Number: %d\n", bus[j].busNo);
                    printf("Bus Name: %s\n", bus[j].name);
                    printf("Source: %s\n", bus[j].source);
                    printf("Destination: %s\n", bus[j].destination);
                    printf("Seat Number: %d\n", pass[i].seatNo);
                }
            }
        }
    }

    if (found == 0) {
        printf("Passenger not found.\n");
    }
}