#include <stdio.h>

int main()
{
    int number = 23232;
    int i = 0;
    while(1)
    {
        printf("%d\n", i);

        if(i == number)
        {
            printf("Number found\n");
            break;
        }
        i++;
    }

    /*
    for (int i = 0; i < 60; i++)
    {
        printf("Hello\n");
        if (i == 6) break;
    }
    */

    return 0;
}