#include <iostream>
using namespace std;

class Sample {
    int x;
public:
    Sample(int a) {
	 x = a;
	  }
    Sample(const Sample &s) {
	 x = s.x; 
	 }
    void display() 
	{ 
	cout << "Value: " << x << endl; 
	}
};

int main() {
    Sample obj1(116);
    Sample obj2 = obj1;
    obj1.display();
    obj2.display();
    return 0;
}

