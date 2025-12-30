#include<stdio.h>

struct Point {
    private:
        int x;
        int y;
    public:
        Point(int a, int b) {
            x = a;
            y = b;
        }

        int getX() {
            return x;
        }

        int getY() {
            return y;
        }

        ~Point() {
            printf("\nthe point destructor is calling here");
        }
};

int main() {
    Point p { 1, 2};
    printf("x: %d, y: %d", p.getX(), p.getY());
}
