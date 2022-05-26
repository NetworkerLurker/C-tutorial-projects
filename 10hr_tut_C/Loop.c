#include <stdio.h>

int main()
{
    //initialization
    //comparison
    //update 

    int max;
    printf("Enter a number to count up to: ");
    scanf("%d", &max);

    int i;
    for(i = 0; i < max; i++)
    {
        printf("%d\n", i);
    }
    printf("You printed up to the number %d\n", i);
    return 0;
}