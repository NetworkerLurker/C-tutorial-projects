#include <stdio.h>
#include <stdbool.h>

int main()
{
    // 1 == true
    // ! == not
    // && == and
    // || == or
    int age = 17;
    double money = 30000;
    if(age > 17 || money > 25000) // 1 == true
    {
        printf("This is an adult\n");
    }
    else
    {
        printf("This is a minor\n");
    }

    if (age < 150) printf("You might be alive\n");

    return 0;
}