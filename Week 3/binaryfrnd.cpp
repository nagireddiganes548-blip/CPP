//binary operator overloading using friend function//
#include<iostream>
using namespace std;
class complex
{
	int real,imag;
	public:
		void get()
		{
			cout<<"Enter real,imag values:";
			cin>>real>>imag;
		}
		friend void operator +(complex &c1,complex &c2);
};
		
		void operator +(complex &c1,complex &c2)
		{
			cout<<c1.real+ c2.real <<"+"<< c1.imag+ c2.imag <<"i";
		
		}
				
 int main()
 {
 	complex c1,c2;
 	c1.get();
 	c2.get();
 	c1+c2;
 	return 0;
 }

