//program for multiple inheritance//
#include<iostream>
using namespace std;
class area
{
	protected:
		void calarea(int l, int b)
		{
			cout<<"Area of the rectangle:"<<l*b<<endl;
		}
};
class perimeter
{
	protected:
		void calper(int l, int b)
		{
			cout<<"Perimeter of the rectangle:"<<2*(l+b)<<endl;
		}
};
class rectangle : public area, public perimeter
{
	public:
		int l,b;
		void result()
		{
			cout<<"Enter l,b values:";
			cin>>l>>b;
			calarea(l,b);
			calper(l,b);
		}		
};
int main()
{
	rectangle r;
	r.result();
}

