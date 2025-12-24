#include <stdio.h>

int main() {
    unsigned long maximum = 0;
    unsigned long values[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (long value: values) {
        if (value > maximum) maximum = value;
    }
    printf("maximum value: %lu", maximum);
}
