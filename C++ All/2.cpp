#include <iostream>
#include <iomanip>
using namespace std;

class Person
{
public:
    string name;
    int age;

    void getdata()
    {

        cout << "Enter the Name: ";
        cin >> name;
        cout << "Enter the Age: ";
        cin >> age;
    }
    void putdata()
    {
        cout << "Name " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person
{
public:
    int percentage;

    void gtdata()
    {

        cout << "Enter the Percentage: ";
        cin >> percentage;
    }
    void ptdata()
    {
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

class Teacher : public Person
{
public:
    int salary;

    void gdata()
    {
        cout << "Enter the Salary: ";
        cin >> salary;
    }
    void pdata()
    {
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Student s;
    Person p;
    Teacher t;
    p.getdata();
    s.gtdata();
    t.gdata();

    cout << endl;

    p.putdata();
    s.ptdata();
    t.pdata();

    return 0;
}