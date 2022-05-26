#include <stdio.h>

int main()
{
    printf("Choose a menu option 1-4:\n");
    printf("1. Add a patient\n");
    printf("2. View a patient\n");
    printf("3. Search patients\n");
    printf("4. Exit\n");

    int input;
    scanf("%d", &input);

    switch(input)
    {
        case 1:
            printf("Adding a patient\n");
            break;
        case 2:    
            printf("Viewing a patient\n");
            break;
        case 3:
            printf("Searching patients\n");
            break;
        case 4:
            printf("Exiting...\n");
            break;
        default:   
            printf("Invalid input, try again\n");
            break;
    }
    return 0;
}