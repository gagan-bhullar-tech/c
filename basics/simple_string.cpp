#include <string>
#include <stdlib.h>

struct SimpleString {
    size_t max_size;
    char *buffer;
    int length;

    // this is copy constructor
    SimpleString(const SimpleString& other) :
        max_size { other.max_size},
        buffer { new char[other.max_size]},
        length { other.length } {
            std::strncpy(buffer, other.buffer, max_size);
        }

    // this is assignment
    SimpleString& operator = (const SimpleString& other) {
        if (this == &other) return *this;
        const auto new_buffer = new char[other.max_size];
        delete[] buffer;
        buffer = new_buffer;
        length = other.length;
        max_size = other.max_size;
        std::strncpy(buffer, other.buffer, max_size);
        return *this;
    }

    ~SimpleString() {
        delete[] buffer;
    }
};
