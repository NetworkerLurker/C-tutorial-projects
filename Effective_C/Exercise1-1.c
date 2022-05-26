#include <stdio.h>

static unsigned int counter = 0;

int increment(void) {
    counter++;
    printf("%d ", counter);
    return counter;
}

unsigned int retrieve(void)
{
    unsigned int currentCount = counter;
    printf("\nCurrent Count: %d ", counter);
    return currentCount;
}

int main(void) {
    for (int i = 0; i < 5; i++) {
        increment();
    }
    retrieve();
    return 0;
}

//Add a retrieve function to retrieve the current value of counter.