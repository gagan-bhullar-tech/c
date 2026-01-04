#include <cstdio>
#include <cstring>

struct Person {
    int value;
};

void print(Person& person) {
    person.value = 9;
    printf("person: %d", person.value);
}

int main() {
    Person person;
    person.value = 10;
    print(person);
}
