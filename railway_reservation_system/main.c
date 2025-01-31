#include <stdio.h>
#include <stdlib.h>
/**
int Nbr[] = {101, 102, 103, 104, 105};
char *Dest[] = {"Kigali", "Musanze", "Rubavu", "Nyundo", "Huye"};
int AvailSeats[] = {30, 25, 15, 20, 10};
int Price[] = {5000, 4500, 3500, 4000, 3000};

void viewAvailableTrains(int Nbr[], char *Dest[], int AvailSeats[], int Price[])
{
    printf("Available Trains: \n");
    printf("Train No: %d, Destination: %s, Available Seats: %d, Price: %d RWF\n", Nbr[0], Dest[0], AvailSeats[0], Price[0]);
    printf("Train No: %d, Destination: %s, Available Seats: %d, Price: %d RWF\n", Nbr[1], Dest[1], AvailSeats[1], Price[1]);
    printf("Train No: %d, Destination: %s, Available Seats: %d, Price: %d RWF\n", Nbr[2], Dest[2], AvailSeats[2], Price[2]);
    printf("Train No: %d, Destination: %s, Available Seats: %d, Price: %d RWF\n", Nbr[3], Dest[3], AvailSeats[3], Price[3]);
    printf("Train No: %d, Destination: %s, Available Seats: %d, Price: %d RWF\n", Nbr[4], Dest[4], AvailSeats[4], Price[4]);
}
**/

/**
int train;
int seats;
int RS = 30;
void bookTickets(int train, int seats, int Rs)
{
    printf("Enter train number: ");
    scanf("%d", &train);
    printf("Enter number of seats: ");
    scanf("%d", &seats);

    printf("\n%d tickets booked successfully for Train No: %d \n", seats, train);
    printf("Remaining Seats: %d \n", RS - seats);
}
**/

/**
int train;
int seats;
int RS = 28;
void bookTickets(int train, int seats, int Rs)
{
    printf("Enter train number: ");
    scanf("%d", &train);
    printf("Enter number of seats to cancel: ");
    scanf("%d", &seats);

    printf("\n%d tickets booked successfully for Train No: %d \n", seats, train);
    printf("Remaining Seats: %d \n", RS + seats);
}
**/


int Nbr[] = {101, 102, 103, 104, 105};
char *Dest[] = {"Kigali", "Musanze", "Rubavu", "Nyundo", "Huye"};
int AvailSeats[] = {30, 25, 15, 20, 10};
int Price[] = {5000, 4500, 3500, 4000, 3000};
char dest[];

void searchTrains(char *dest, int Nbr[], char *Dest[], int AvailSeats[], int Price[])
{
    int found = 0;
    printf("Enter destination: ");
    scanf("%s", dest);
    printf("Search results: \n");


    for (int i = 0; i<= 4; i++)
    {
        if (strcmp(Dest[i], dest) == 0)
        {
            printf("Train No: %d, Destination: %s, Available Seats: %d, Price: %d RWF\n", Nbr[i], Dest[i], AvailSeats[i], Price[i]);
            found =1;
        }
            else if (strcmp(Dest[i], dest) == 0)
            {
                printf("Train No: %d, Destination: %s, Available Seats: %d, Price: %d RWF\n", Nbr[i], Dest[i], AvailSeats[i], Price[i]);
            found = 1;
            }
            else if (strcmp(Dest[i], dest) ==0)
            {
                printf("Train No: %d, Destination: %s, Available Seats: %d, Price: %d RWF\n", Nbr[i], Dest[i], AvailSeats[i], Price[i]);
                found = 1;
            }
            else if (strcmp(Dest[i], dest) ==0)
            {
                printf("Train No: %d, Destination: %s, Available Seats: %d, Price: %d RWF\n", Nbr[i], Dest[i], AvailSeats[i], Price[i]);
                found = 1;
            }
            else if (strcmp(Dest[i], dest) ==0)
            {
                printf("Train No: %d, Destination: %s, Available Seats: %d, Price: %d RWF\n", Nbr[i], Dest[i], AvailSeats[i], Price[i]);
                found = 1;
            }

    }
     if (!found)
            {
                printf("No trains found for the destination: %s \n", dest);
            }
}



int main()
{
    /**
    int choice;
    printf("Choose an option: \n");
    printf("1. View available trains\n");
    printf("2. Book tickets\n");
    printf("3. Cancel tickets\n");
    printf("4. Search by destination\n\n");

    printf("Enter your choice: ");
    scanf("%i", &choice);

    switch(choice)
    {
    case 1:
        printf("View available trains feature coming soon!\n");
        break;
    }
    **/

    /**viewAvailableTrains(Nbr, Dest, AvailSeats, Price); **/

    /**bookTickets(train, seats, RS); **/

    /**bookTickets(train, seats, RS); **/

    searchTrains(dest, Nbr, Dest, AvailSeats, Price);

    return 0;
}
