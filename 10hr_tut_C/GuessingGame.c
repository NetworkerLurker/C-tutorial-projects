//The user has to guess a number from 0 - x
//output whether or not the person is correct
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //Generate a random number
    //pseudo random number
    int maxValue = 5;
    srand(time(NULL));
    int randomNumber = rand() % maxValue + 1; //modulus operator to shrink number to be 1 - 5

    printf("Guess a number 0 - %d: ", maxValue);
    int guess;
    scanf("%d", &guess);

    if(guess == randomNumber)
    {
        printf("You win!\n");
    } 
    else
    {
        printf("You lose! Try again.\n");
    }

    printf("Thank you for playing!\n");
    return 0;
}