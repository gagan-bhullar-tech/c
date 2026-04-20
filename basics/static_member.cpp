#include <cstdio>

struct Value {
    static int value_static_member;

    static void increment(int value) {
        value_static_member += value;
    }
};

int Value::value_static_member = 90;

int main() {
    Value::increment(810);
    printf("value: %d", Value::value_static_member);
}
