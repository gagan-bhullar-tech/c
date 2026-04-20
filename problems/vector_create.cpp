#include <iostream>
#include <vector>

using namespace std;

int main() {
    std::vector<std::string> names;
    std::vector<int> ages;
    for (int i = 0; i < 3; i++) {
        std::string name;
        cin >> name;
        int age;
        cin >> age;
        names.push_back(name);
        ages.push_back(age);
    }
    std::string value;
    cin >> value;
    int index;
    for (int i = 0; i < 3; i++) {
        if (names[i] == value) {
            index = i;
        }
    }
    printf("Age of %s is %d years", value.c_str(), ages[index]);
    return 0;
}



