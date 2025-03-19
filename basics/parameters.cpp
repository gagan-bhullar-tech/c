# include<iostream>

using namespace std;

void pass_by_value(int value) {
    value = value + 1;
}

void pass_by_address(int *address) {
    *address = *address + 1;
}

void pass_by_reference(int &val) {
    val = val + 1;
}

int main() {
    // pass by value
    int val = 1;
    pass_by_value(val);
    cout<<"Pass by value: "<<val<<endl;

    // pass by address
    cout<<&val;
    int *ptr = &val;
    pass_by_address(ptr);
    cout<<"Pass by address: "<<val<<endl;

    // pass by reference
    int &ref = val;
    pass_by_reference(ref);
    cout<<"Pass by reference: "<<val<<endl;
}

