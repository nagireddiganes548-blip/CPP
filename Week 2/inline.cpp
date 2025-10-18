#include <iostream>
using namespace std;
inline int square(int x)
{ 
    return x*x; 
}
int add(int a,int b)
{ 
    return a+b; 
	}
double add(double a,double b)
{ 
return a+b; 
}
int main()
{
    cout<<square(7)<<" "<<add(3,4)<<" "<<add(2.5,3.5);
}

