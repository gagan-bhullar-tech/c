#include <cstdio>

struct Element {
    char prefix[2];
    short operating_number;
    Element* next{};

    void insert_after(Element* new_element) {
        new_element->next = this->next;
        this->next = new_element;
    }
};

int main() {
    Element one;
    one.prefix[0] = 'O';
    one.prefix[1] = 'N';
    one.operating_number = 1;

    Element two;
    two.prefix[0] = 'T';
    two.prefix[1] = 'W';
    two.operating_number = 2;

    one.insert_after(&two);

    for(Element* pointer = &one; pointer; pointer = pointer->next) {
        printf("prefix: %c%c, operating number: %d\n", pointer->prefix[0], pointer->prefix[1], pointer->operating_number);
    }
}
