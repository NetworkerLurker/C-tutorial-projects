#include <stdio.h>

int main()
{
    int i = 0, k;

    while (i < 11)
    {
        k = i - 1;
        printf("%d ", i);
        i++;

        while(k >= 0)
        {
            printf("%d ", k);
            k--;
        }
        
        printf("\n");
    }
    
    /*
    for (int i = 0; i < 11; i++)
    {
        for(int k = i; k >= 0; k--)
        {
            printf("%d", k);
        }
    printf("\n");
    }
    */

    return 0;
}