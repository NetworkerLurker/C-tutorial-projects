#include <stdio.h>

int factorial(int number)
{
    int factorial = 1;

    for (int i = number; i > 1; i--)
    {
        factorial *= i;
    }
    return factorial;
}

void outputFactorial(int input)
{
    printf("The factorial of %d is %d.\n", input, factorial(input));
}

int main()
{
    for(int i = 0; i < 10; i++)
    {
        outputFactorial(i);
    }

     return 0;
     
    /*
    outputFactorial(5);
    outputFactorial(8);
    */
    
}

/*
int main()
{
    int number = 5;
    int factorial = 1;

    printf("The factorial of %d is %d\n", number, factorial);
    return 0;
}
*/

/*
int main()
{
    printf("%d ", factorial(5));
    printf("%d ", factorial(8));
    
    printf("%d ", factorial(factorial(3)));
    return 0;
}
*/