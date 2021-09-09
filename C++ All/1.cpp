#include <iostream>
#include <string.h>
using namespace std;

class customer
{
public:
    string name_cust;
    int cust_num;

    void get_data()
    {
        cout << endl
             << "Enter Customer Name:";
        cin >> name_cust;
        cout << endl
             << "Enter Customer Number:";
        cin >> cust_num;
    }

    friend void get_cust_data(customer);
};

class manager
{
    string name_man;

public:
    void get_cust_data(customer obj)
    {
        cout << endl
             << "Enter Name of Manager:";
        cin >> name_man;

        cout << endl
             << "Customer Name:" << obj.name_cust;
        cout << endl
             << "Customer Number:" << obj.cust_num;
        cout << endl
             << "Manager Name:" << name_man;
    }
};

int main()
{
    customer obj1;
    manager obj2;

    obj1.get_data();
    obj2.get_cust_data(obj1);

    return 0;
}