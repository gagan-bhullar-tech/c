#include <cstdio>

int main() {
    char lower[] = "abc?e";
    char upper[] = "ABC?E";

    lower[3] = 'd';
    *(upper + 3) = 'D';

    printf("lower: %s\n", lower);
    printf("upper: %s\n", upper);

    *(lower + 100) = '9';
    printf("lower: %s\n", lower);
}
