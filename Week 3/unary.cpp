// operator overloading using member function//
#include<iostream>
using namespace std;
class unary
{
	int x,y,z;
	public:
		void get()
		{
			y=-34;
			x=10;
			z=-78;
		}
		void show()
		{
			cout<<"x="<<x<<endl;
			cout<<"y="<<z<<endl;
			cout<<"z="<<z<<endl;	
		}
		void operator -() // SYNTAX:  returntype operator op(args)//
		{
			x=-x;
			y=-y;
			z=-z; 
		}
};
    int main ()
    {
    	unary u;
    	u.get();
		-u;    // or else u.operator -()
		u.show();

   }

