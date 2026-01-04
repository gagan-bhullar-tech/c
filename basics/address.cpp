#include <cstdio>

int main() {
    int val{};
    printf("value: %d\n", val);

    int *valp = &val;
    printf("address: %p\n", valp);

    *valp = 9;
    printf("value change: %d", *valp);
}
