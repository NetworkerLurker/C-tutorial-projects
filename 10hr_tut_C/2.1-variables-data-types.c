#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a = 10;
    double b = 10.5;
    printf("%lu\n", sizeof(b)); // 8 bytes = 64 bits
    float c = 10.5;
    printf("%lu\n", sizeof(c)); // 4 bytes = 32 bits
    char d = 'a';
    char e[] = "char array"; // aka a string
    bool f = false;

    //int zero .99;
    //int zero will return 0. it cuts off everything after the decimal there is no rounding

    int slices = 17;
    int people = 2;

    double slicesPerperson = (double) slices / people; //(double) is put before slices as an implicit type promotion, as int / int will return int 
    printf("%lf\n", slicesPerperson);

    double test1 = (25 / 2) * 2; //24.0
    double test2 = (25 / 2) * 2; //24.0

    double test3= 25.0 / 2 * 2; //25.0
    double test4 = (double) 25 / 2 * 2; //25.0
    return 0;
}