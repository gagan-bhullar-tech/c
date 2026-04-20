#include <stdio.h>

int main() {
    char alphabets[26];

    for (int i = 0; i < 26; i++)
    {
        alphabets[i] = i + 97;
    }
    printf("%s\n", alphabets);
    for (int i = 0; i < 26; i++)
    {
        alphabets[i] = i + 65;
    }
    printf("%s\n", alphabets);
}
