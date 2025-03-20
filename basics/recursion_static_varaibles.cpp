# include <iostream>

using namespace std;

int sum(int n) {
    static int i = 0;
    if (n > 0) {
        i++;
        return i + sum(n - 1); 
    }
    return 0;
}

int main() {
    cout<<sum(5);
    return 0;
}