//program for multi-level inheritance//
#include<iostream>
using namespace std;

class student
  {
    protected:
    string name;
    int rollno;

    void gets()
 {
        cout << "Enter roll no and name: ";
        cin >> rollno >> name;
    }
    void shows() {
        cout << "Roll no: " << rollno << endl;
        cout << "Name: " << name << endl;
    }

};

class marks : public student
 {
protected:
    int m1, m2, m3, m4, m5;

    void getm()
 {
        gets();
        cout << "Enter 5 subject marks: "<<endl;
        cin >> m1 >> m2 >> m3 >> m4 >> m5;
    }
};

class percentage : public marks
 {
    public:
    float per;
    void showp() 
{
        getm();
        per = (m1 + m2 + m3 + m4 + m5) / 5.0;
		shows(); // float division
        cout << "Percentage: " << per << "%" << endl;
    }

};

int main() 
{
    percentage p;
    p.showp();
}

