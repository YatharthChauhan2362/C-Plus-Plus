// Static Data Members & Methods in C++
// This program was created by Yatharth Chauhan

#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }

    static void getCount(void)
    {
        // cout<<id; // throws an error
        cout << "The value of count is " << count << endl;
        cout << endl;
    }
};

// Count is the static data member of class Employee
int Employee::count; // Default value is 0

int main()
{
    Employee yatharth, riya, sujal;
    // yatharth.id = 1;
    // yatharth.count=1; // cannot do this as id and count are private

    yatharth.setData();
    yatharth.getData();
    Employee::getCount();

    riya.setData();
    riya.getData();
    Employee::getCount();

    sujal.setData();
    sujal.getData();
    Employee::getCount();

    return 0;
}