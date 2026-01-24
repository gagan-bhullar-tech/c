#include <stdexcept>
#include <cstdio>

struct Excep {
    void test(int x) {
        if (x == 0xFACE) {
            throw 'a';
        }
        printf("it is not thrown");
    }
};

int main() {
    try {
        Excep excep;
        excep.test(0xFACE);
    } catch(const std::runtime_error &e) {
        printf("exception: %s", e.what());
    } catch(...) {
        printf("catch any exception");
    }
}
