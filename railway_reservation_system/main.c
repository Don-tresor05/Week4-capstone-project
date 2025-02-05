#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct
{
    int Nbr;
    char Dest[100];
    int AvailSeats;
    int Price;
}Train;

Train train_array[]={
    {101,"Kigali",30,5000},
    {102,"Musanze",25,4500},
    {103,"Rubavu",15,3500},
    {104,"Nyundo",20,4000},
    {105,"Huye",10,3000}
};





void viewAvailableTrains() {
    printf("\nAvailable Trains:\n");
    for (int i = 0; i < 5; i++) {
        printf("Train No: %d, Destination: %s, Available Seats: %d, Price: %d RWF\n",
               train_array[i].Nbr, train_array[i].Dest, train_array[i].AvailSeats, train_array[i].Price);
    }
}




void bookTickets() {
    int train_nbr, train_seats;
    printf("\nEnter train number: ");
    scanf("%d", &train_nbr);
    printf("Enter number of seats: ");
    scanf("%d", &train_seats);


    int found = -1;
    for (int i = 0; i < 5; i++) {
        if (train_array[i].Nbr == train_nbr) {
            found = i;
            break;
        }
    }

    if (found == -1) {
        printf("Invalid train number!\n");
        return;
    }

    if (train_seats > train_array[found].AvailSeats) {
        printf("Not enough seats available! Only %d left.\n", train_array[found].AvailSeats);
    } else {
        train_array[found].AvailSeats -= train_seats;
        printf("\n%d tickets booked successfully for Train No: %d\n", train_seats, train_nbr);
        printf("Remaining Seats: %d\n", train_array[found].AvailSeats);
    }
}



void cancelTickets() {
    int train_nbr, train_seats;
    printf("\nEnter train number: ");
    scanf("%d", &train_nbr);
    printf("Enter number of seats to cancel: ");
    scanf("%d", &train_seats);


    int found = -1;
    for (int i = 0; i < 5; i++) {
        if (train_array[i].Nbr == train_nbr) {
            found = i;
            break;
        }
    }

    if (found == -1) {
        printf("Invalid train number!\n");
        return;
    }

    train_array[found].AvailSeats += train_seats;
    printf("\n%d tickets canceled successfully for Train No: %d\n", train_seats, train_nbr);
    printf("Updated Available Seats: %d\n", train_array[found].AvailSeats);
}




void searchTrains() {
    char train_dest[20];
    printf("\nEnter destination: ");
    scanf("%s", train_dest);

    int found = 0;
    printf("\nSearch results:\n");
    for (int i = 0; i < 5; i++) {
        if (strcmp(train_array[i].Dest, train_dest) == 0) {
            printf("Train No: %d, Destination: %s, Available Seats: %d, Price: %d RWF\n",
                   train_array[i].Nbr, train_array[i].Dest, train_array[i].AvailSeats, train_array[i].Price);
            found = 1;
        }
    }

    if (!found) {
        printf("No trains found for the destination: %s\n", train_dest);
    }
}


int main() {
    int choice;

    while (1) {
        printf("\nChoose an option:\n");
        printf("1. View available trains\n");
        printf("2. Book tickets\n");
        printf("3. Cancel tickets\n");
        printf("4. Search by destination\n");
        printf("5. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                viewAvailableTrains();
                break;
            case 2:
                bookTickets();
                break;
            case 3:
                cancelTickets();
                break;
            case 4:
                searchTrains();
                break;
            case 5:
                printf("Bye!!! See you!\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}


