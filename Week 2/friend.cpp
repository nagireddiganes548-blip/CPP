#include <iostream>
using namespace std;
class Box 
{
private:
    double width;
public:
    Box(double w) 
	{
        width = w;
    }
    friend void showWidth(Box b);
};
void showWidth(Box b) 
{
    cout << "Width of the box: " << b.width << endl;
}
int main() 
{
    Box b1(21.0);
    showWidth(b1);
    return 0;
}

