// Program for Hybrid Inheritance
#include <iostream>
using namespace std;
class student 
{
protected:
    int rno;
    string name;
public:
    void getst() 
	{
        cout << "Enter roll no: ";
        cin >> rno;
        cout << "Enter name: ";
        cin >> name;
    }
    void shows() 
	{
        cout << "Roll no: " << rno << endl;
        cout << "Name: " << name << endl;
    }
};
class marks : virtual public student 
{
protected:
    int m1, m2, m3;
public:
    void getm() 
	{
        cout << "Enter 3 subject marks: ";
        cin >> m1 >> m2 >> m3;
    }
};
class project 
{
protected:
    int pmarks;
public:
    void getp() 
	{
        cout << "Enter project marks: ";
        cin >> pmarks;
    }
};
class percentage : public marks, public project 
{
public:
    float per;
    void calculate() 
	{	
        getst();
        getm();
        getp();
        per = (m1 + m2 + m3 + pmarks) / 4.0;
    }
    void showp() 
	{
        cout << "\n--- Student Result ---" << endl;
        shows();
        cout << "Marks: " << m1 << ", " << m2 << ", " << m3 << endl;
        cout << "Project marks: " << pmarks << endl;
        cout << "Percentage: " << per << "%" << endl;
    }
};

int main() 
{
    percentage obj;
    obj.calculate();
    obj.showp();
    return 0;
}

