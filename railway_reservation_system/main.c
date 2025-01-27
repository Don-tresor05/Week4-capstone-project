#include <stdio.h>
#include <stdlib.h>

int main()
{
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

    return 0;
}
