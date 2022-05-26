#include <stdio.h>

int main()
{
	//Operator precedence
	//* / + -
	//How do you know?
	int x, y;
	x = (y = 5);

	//y = 5;
	//x = y;
	
	int z = 20;
	y = 2;
	x = -y + z;
	
	//X = -(y + z); x = -22 //Wrong
	//x = (-y) + z; x = 18 //Correct
	//cppreference.com
	
	printf("%i\n", x);
	return 0;
}
