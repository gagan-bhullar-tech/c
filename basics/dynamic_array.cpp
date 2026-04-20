#include <cstdio>

int main() {
    int n = 90;
    int *my_ptr = new int[n];
    *my_ptr = 1;

    *(my_ptr + 1) = 2;

    printf("element 1: %d\n", *my_ptr);
    printf("element 2: %d\n", *(my_ptr + 1));

    delete[] my_ptr;
}
