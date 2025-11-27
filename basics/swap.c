#include<stdio.h>

void swap(int *a, int *b);

int main()
{
    int x = 9, y = 90;
    printf("Original order: %d %d\n", x, y);
    swap(&x, &y);
    printf("Swap order: %d %d", x, y);
}

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
