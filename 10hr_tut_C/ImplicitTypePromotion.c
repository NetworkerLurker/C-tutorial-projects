#include <stdio.h>

int main()
{
	//implicit type conversion - promotion
	
	float x = 50.0;

	print("%f", x); //printf takes a double
	//x is PROMOTED - the Value of x is stored as a double in x1
	return 0;
}


void printf(char tacos[], double x1)
{

}
