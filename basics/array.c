#include<stdio.h>

int main() {
    char str[11];
    for (unsigned int i = 0; i < 10; ++i)
    {
        str[i] = i;
    }
    str[10] = '\0';
    printf("%s", str);
}
