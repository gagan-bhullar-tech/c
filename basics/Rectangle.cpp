#include <iostream>

using namespace std;

class Rectangle {
    private:
        int width;
        int height;

    public:
        Rectangle(int width, int height) {
            this->width = width;
            this->height = height;
        }

        void setWidth(int width) {
            this->width = width;
        };
        void setHeight(int height) {
            this->height = height;
        };
        int getWidth() {
            return this->width;
        }
        int getHeight() {
            return this->height;
        }
        int calculateArea() {
            return this->width * this->height;
        }
        int calculatePerimeter() {
            return 2 * (this->width + this->height);
        }
};


int main() {
    Rectangle rectangle = Rectangle(10, 20);
    cout<<"Area: "<<rectangle.calculateArea()<<endl;
    cout<<rectangle.calculatePerimeter()<<endl;
};