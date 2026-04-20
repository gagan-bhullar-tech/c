#include <iostream>
#include <list>

using namespace std;

int main() {
    list<string> values;
    string value;
    while (cin >> value && value != "end") {
        values.push_back(value);
    }
    for (const string& value : values) {
        cout << value << endl;
    }
}