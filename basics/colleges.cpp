#include <cstdio>

struct College {
    char name[256];
};

void print(College *colleges, size_t number_of_colleges) {
    for(size_t i = 0; i < number_of_colleges; i++) {
        printf("College: %s\n", colleges[i].name);
    }
}

int main() {
    College colleges[] = {"One", "Two"};
    print(colleges, sizeof(colleges) / sizeof(College));
}
