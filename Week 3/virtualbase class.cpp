#include<iostream> 
using namespace std; 
class A{ 
public: 
void showA() 
{ 
cout<<"Show() of class A"<<endl; 
} 
}; 
class B:virtual public A{ 
public: 
void showB() 
{ 
cout<<"Show() of class B"<<endl; 
} 
}; 
class C:virtual public A{ 
public: 
void showC() 
{ 
cout<<"Show() of class C"<<endl; 
} 
}; 
class D:public B,public C{ 
public: 
void showD() 
{ 
cout<<"show() of class D"<<endl; 
} 
}; 
int main() 
{ 
D d; 
d.showD(); 
d.showB(); 
d.showC(); 
d.showA(); 
} 

