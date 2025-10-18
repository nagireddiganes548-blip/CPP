#include <iostream>
using namespace std;
int num = 500;
namespace Example {
    int num = 1000;
    void display() {
        cout << "Inside namespace Example: num = " << num << endl;
    }
}
int main() {
    int num = 10;
    cout << "Local num: " << num << endl;
    cout << "Global num: " << ::num << endl;
    cout << "Namespace num: " << Example::num << endl;
    Example::display();
    return 0;
}

