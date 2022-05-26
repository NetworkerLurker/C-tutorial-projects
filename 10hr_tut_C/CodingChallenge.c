#include <stdio.h>
#include <math.h>

int main()
{   //Pythagorean theorem calculator that solves for side C given side A and B
    double a;               //Gets side A and squares it
    printf("Side a: ");
    scanf("%lf", &a);
    double a2 = a * a;
    
    double b;               //Gets side B and squares it
    printf("Side b: ");
    scanf("%lf", &b);
    double b2 = b * b;
 
    double c2 = a2 + b2;    //Adds side A and B squares to get side C squared

    printf("Side c is : %lf\n", sqrt(c2));  //Finds the square root of C squared and outputs answer

    
    return 0;
}