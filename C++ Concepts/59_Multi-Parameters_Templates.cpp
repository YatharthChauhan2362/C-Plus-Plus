// Templates with Multiple Parameters
// This program was created by Yatharth Chauhan
/*
1. We have declared data1 and data2 with data types T1 and T2 respectively. 
2. We have applied the constructor filling the values we receive from the main into data1 and data2.
3. Finally, we have displayed both of them.
4. Let me now show you how this template works for different parameters. I’ll pass different data types from the main and see if it's flexible enough.
*/

#include <iostream>
using namespace std;

template <class T1, class T2>
class myClass
{
public:
    T1 data1;
    T2 data2;
    myClass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << this->data1 << " " << this->data2;
    }
};
int main()
{
    myClass<int, char> obj1(1, 'c');
    obj1.display();

    cout << endl;

    myClass<int, float> obj2(1, 1.8);
    obj2.display();
}