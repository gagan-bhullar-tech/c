# include <iostream>

using namespace std;

void func1(int num) {
    if (num > 0) {
        func1(num - 1);
        cout<<num<<" ";
    }
}

int main() {
    func1(9);
}