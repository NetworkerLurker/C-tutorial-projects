#include <stdio.h>

int main()
{
	char ASCII;
	printf("Please enter a character: ");
	scanf("%c", &ASCII);
	printf("The integer value of %c in ASCII  is: %i\n", ASCII, ASCII);

	int integer;
	printf("Please enter an integer between 0 - 127: ");
	scanf("%i", &integer);
	printf("The character value of %i in ASCII is: %c\n", integer, integer);	
	char mathz = 'A' + '\t';
	printf("A(65) + \\t(11) = %c(%d)\n", mathz, mathz);
	return 0;
}
