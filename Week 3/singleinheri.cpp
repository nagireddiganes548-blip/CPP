//program for single inheritance//
#include<iostream>
using namespace std;
class person
{
	protected:
		string name;
		int age;
		char gender;
		void getp()
		{
			cout<<"Enter name,age,gender:";
			cin>>name>>age>>gender;
		}
		void showp()
		{
			cout<<"name="<<name<<endl;
			cout<<"age="<<age<<endl;
			cout<<"gender="<<gender<<endl;
		}	
};
class student:public person
{
	private:
		int pinno;
		float per;
		public:
			void getst()
			{
				getp();
				pinno=116;
				per=98.5;
			}
			void display()
			{
				showp();
				cout<<"pinno="<<pinno<<endl;
				cout<<"percentage="<<per<<endl;	
			}
};
int main()
{
	student s;
	s.getst();
	s.display();
}
