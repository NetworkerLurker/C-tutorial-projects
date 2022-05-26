#include<stdio.h>

int main()
{
    int slices = 20; //variable
    int *p = &slices; //pointer

    printf("Slices: %d\n", slices); //variable
    printf("Slices (through pointer): %d\n", *p); //pointer

    slices = 21; //changed through variable

    printf("Slices: %d\n", slices);
    printf("Slices (through pointer): %d\n", *p);

    *p = 25; //changed through pointer (indirection operator)

    printf("Slices: %d\n", slices);
    printf("Slices (through pointer): %d\n", *p);

    //slices++; variable increment
    //(*p)++; pointer increment
    //do not do: *p++ as it is the same as doing: *(p++) which is incorrect

    return 0;
}