#include <string>
#include <stdlib.h>

struct SimpleString {
    size_t max_size;
    char *buffer;
    int length;

    SimpleString(const SimpleString& other) :
        max_size { other.max_size},
        buffer { new char[other.max_size]},
        length { other.length } {
            std::strncpy(buffer, other.buffer, max_size);
        }

    ~SimpleString() {
        delete[] buffer;
    }
};
