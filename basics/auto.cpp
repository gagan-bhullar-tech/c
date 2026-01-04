#include <cstdio>

int main() {
    auto original = 9;
    auto& original_ref = original;
    printf("original: %d\n", original);
    printf("original ref: %d\n", original_ref);

    original_ref = 90;
    printf("original: %d\n", original);
    printf("original ref: %d\n", original_ref);
}
