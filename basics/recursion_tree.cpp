# include <iostream>

using namespace std;

void func1(int num) {
    if (num > 0) {
        cout<<num<<" ";
        func1(num - 1);
        func1(num - 1);
    }
}

int main() {
    func1(5);
}