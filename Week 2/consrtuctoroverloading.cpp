#include <iostream>
using namespace std;
class Rectangle {
    int length, width;
public:
    Rectangle() { 
	length = 0; width = 0;
	 }
    Rectangle(int l) 
	{
	 length = l; width = l;
	  }
    Rectangle(int l, int w) 
	{ 
	length = l; width = w; 
	}
    void display() 
	{ 
	cout << "Length: " << length << ", Width: " << width << endl;
	 }
};
int main() {
    Rectangle r1, r2(7), r3(3,1);
    r1.display();
    r2.display();
    r3.display();
    return 0;
}

