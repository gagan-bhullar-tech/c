#include<stdio.h>
#include <stdlib.h>

int main() {
    if (puts("Hello, World!") == EOF) {
        perror("puts failed");
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}
