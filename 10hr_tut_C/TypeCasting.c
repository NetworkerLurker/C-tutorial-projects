#include<stdio.h>

int main()
{
	int slices = 17;
	int people = 2;

	//two way to fix this
	//1) add .0 to a constant.. ex 2 -> 2.0
	//2) Explicit type casting.. ex 2 -> (double) 2
	
	double halfThePizza = slices / (double) people;
	return 0;
}
