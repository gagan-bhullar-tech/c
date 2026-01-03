#include <cstdio>

int main() {
    int val{};
    printf("value: %d\n", val);

    int *valp = &val;
    printf("address %p", valp);
}
