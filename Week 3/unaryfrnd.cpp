// operator overloading using friend function//
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
		friend void operator -(unary &u);
};
        void operator -(unary &u) // SYNTAX:  returntype operator op(&args)//
		{
			u.x=-u.x;
			u.y=-u.y;
			u.z=-u.z;
		}
	int main()
	{
		unary u;
		u.get();
		-u;
		u.show();  
	}
	

