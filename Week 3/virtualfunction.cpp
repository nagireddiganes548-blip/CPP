#include<iostream> 
using namespace std; 
class Base{ 
public: 
virtual void show() 
{ 
cout<<"Show() of base class."<<endl; 
} 
}; 
class derv1:public Base{ 
public: 
 void show() 
{ 
cout<<"Show() of first derived class."<<endl; 
} 
}; 
class derv2:public Base{ 
public: 
     void show() 
{ 
cout<<"Show() of second derived class."<<endl; 
} 
}; 
int main() 
{ 
Base *bptr; 
derv1 d1; 
    bptr=&d1; 
    bptr->show(); 
    derv2 d2; 
    bptr=&d2; 
    bptr->show(); 
     
    return 0; 
} 

