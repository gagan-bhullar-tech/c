#include <cstdio>

struct Trace {
    private:
        const char* const name;
    public:
        Trace(const char* name) : name{ name } {
            printf("%s construct \n", name);
        }

        ~Trace() {
            printf("%s destruct \n", name);
        }
};

static Trace t1{ "Static variable"};
Trace t2{"Thread local variable"};

int main() {
    printf("A\n");
    Trace t3{"Automatic variable"};
    printf("B\n");
    const auto* t4 = new Trace{"other variable"};
    printf("C\n");
}
