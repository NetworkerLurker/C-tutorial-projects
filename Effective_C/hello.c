#include <stdio.h>
#include <stdlib.h>

//puts method
int main(void){
    if (puts("Hello, world!") == EOF) {
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}

//printf method
//int main(void) {
//    if(printf("%s\n", "Hello, World!") < 0){
//        return EXIT_FAILURE;
//    }
//    return EXIT_SUCCESS;
//}
