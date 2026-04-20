#include<stdio.h>
#include <stdlib.h>

int main() {
    if (printf("Hello, World!") < 0) {
        perror("printf failed");
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}
