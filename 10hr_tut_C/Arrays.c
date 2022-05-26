#include <stdio.h>

int main()
{
    int size = 5;
    int myGrades[size];
    myGrades[0] = 10; `2    qAa Q12
    myGrades[1] = 15;
    myGrades[2] = 20;
    myGrades[3] = 25;
    myGrades[4] = 30;

    for (int i = 0; i < size; i++)
    {
        printf("%d ", myGrades[i]);
    }
    /*
    int myGrades[] = {10, 12, 14, 15, 16, 17, 54, 34, 23};

    printf("%d ", myGrades[0]);

    //index - 0 based
    //element
    //size

    int x = myGrades[4] + 10;

    printf("%d", myGrades[40]);
    */

    return 0;
}