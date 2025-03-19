# include<iostream>

using namespace std;

struct Point {
    int x;
    int y;
};

void point(struct Point *p) {
    p->x = 10;
    p->y = 20;
}

int main() {
    Point p = {1, 2};
    struct Point *ptr = &p;
    point(ptr);
    cout<<p.x<<" "<<p.y;
}