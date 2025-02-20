#include <stdio.h>

int main()
{
    char name[100] = "";
    unsigned int booked_book_id;

    printf("\nWelcome to Alham's Library Management System!\n");

    printf("\nPlease enter your name: ");
    scanf("%s", name);

    printf("\nHello %s!\n", name);
    printf("Here are the list of books available in our library,\n");

    printf("\n ----- ---------------------------------");
    printf("\n| ID  |              BOOK               |");
    printf("\n|----- ---------------------------------|");
    printf("\n|  1  |  Introduction to Programming    |");
    printf("\n|  2  |  Data Structures and Algorithm  |");
    printf("\n|  3  |  Computer Networks              |");
    printf("\n ----- ---------------------------------");
    printf("\n");

    printf("Please enter the book ID you need to borrow: ");
    scanf("%d", &booked_book_id);

    switch (booked_book_id)
    {
    case 1:
        printf("\nCongrats %s! You have selected 'Introduction to Programming'.\n", name);
        break;
    case 2:
        printf("\nCongrats %s! You have selected 'Data Structures and Algorithm'.\n", name);
        break;
    case 3:
        printf("\nCongrats %s! You have selected 'Computer Networks'.\n", name);
        break;
    default:
        printf("\nInvalid book ID. Please try again.\n");
        return 1;
    }

    return 0;
}
