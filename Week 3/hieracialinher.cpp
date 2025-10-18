// Program for Hierarchical Inheritance
#include <iostream>
#include <string>
using namespace std;

class person {
protected:
    int age;
    string name;
    char gender;

    void getp() 
	{
        cout << "Enter name:";
        cin >> name;
        cout << "Enter age:";
        cin >> age;
        cout << "Enter gender (M/F): ";
        cin >> gender;
    }

    void showp() 
	{
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
    }
};

class student : public person 
{
public:
    float per;
    int pno;

    void getst() {
        getp();
        cout << "Enter pin number: ";
        cin >> pno;
        cout << "Enter percentage: ";
        cin >> per;
    }

    void shows() {
        cout << "\n--- Student Details ---" << endl;
        showp();
        cout << "Pin no: "<< pno << endl;
        cout << "Percentage: "<< per << endl;
    }
};

class faculty : public person 
{
public:
    int empid;
    string sub;
    int exp;

    void getf() 
	{
        getp();
        cout << "Enter employee ID: ";
        cin >> empid;
        cin.ignore();              // clear buffer
        cout << "Enter subject: ";
        getline(cin, sub);
        cout << "Enter experience (years): ";
        cin >> exp;
    }

    void showf() {
        cout << "\n--- Faculty Details ---" << endl;
        showp();
        cout << "Employee ID: " << empid << endl;
        cout << "Subject: " << sub << endl;
        cout << "Experience: " << exp << " years" << endl;
    }
};

int main() 
{
    student s;
    faculty f;

    s.getst();
    s.shows();

    f.getf();
    f.showf();

    return 0;
}

