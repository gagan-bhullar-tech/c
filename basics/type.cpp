#include <cstdio>

int main() {
    unsigned short a = 0b10101010;
    printf("%hu\n", a);

    int b = 0123;
    printf("%d", b);

    unsigned long long d = 0xFFFFFF;
    printf("%llu", d);

    long value = 123;
    printf("%lu\n", value);

    char c1 = 'M';

    wchar_t y = L'Z';

    printf("char: %c\n", c1);

    printf("char lc: %c", y);
}
