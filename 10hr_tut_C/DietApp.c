#include <stdio.h>

int main()
{
    printf("How many slices of pizza have you ate today? >");
    int slices;
    scanf("%d", &slices);
    int caloriesPerSlice = 250;

    switch(slices)
    {
        case 1:
            printf("You did a great job!\n");
            break;
        case 2:
            printf("You did an OK job!\n");
            break;
        case 3:
            printf("You did a bad job, try to eat just two slices next time!\n");
            break;
        case 4:
            printf("You're a dissapointment.\n");
            break;
        default:
            printf("Enjoy your heart disease.\n");
            break;
    }

    printf("You had %d calories.\n", caloriesPerSlice * slices);

    return 0;
}