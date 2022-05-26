#include <stdio.h>

int main()
{
    double money = 20;
    double cost = 25;

    money > cost ? printf("You can afford it!\n") : printf("Sorry, you need %lf more dollars\n", cost - money); //ternary statement

    /*
    if(money > cost)
    {
        printf("You can afford it!\n");
    }
    else
    {
        printf("Sorry, you need %lf more dollars\n", cost - money);
    }
    */

    return 0;
}