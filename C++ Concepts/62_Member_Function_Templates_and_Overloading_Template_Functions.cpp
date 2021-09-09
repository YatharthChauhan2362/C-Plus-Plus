// Member Function Templates & Overloading Template Functions
// This program was created by Yatharth Chauhan
/*
1. We’ll declare a template, then a class named Yatharth.
2. We’ll then define a variable data inside that class with variable data type T. 
3. We then make a constructor feeding the value received from the main to data. 
4. And then, we’ll write the function, display and write its code. 
*/
/*
#include <iostream>
using namespace std;
template <class T>
class Yatharth
{
public:
    T data;
    Yatharth(T a)
    {
        data = a;
    }
    void display();
};
template <class T>
void Yatharth<T>::display()
{
    cout << data;
}
int main()
{
    Yatharth<int> h(5.7);
    cout << h.data << endl;
    h.display();
    return 0;
}

Output:
5
5
*/
/*
We made two void functions, one specified and one generic using a template.
The first one receives an integer and prints the integer with a different prefix. 
The generic one receives the value as well as the data type and prints the value with a different prefix.
Now, we’ll wish to see the output of the following functions, by calling them from the main.
*/
#include <iostream>
using namespace std;

void func(int a)
{
    cout << "I am first func() " << a << endl;
}

template <class T>
void func(T a)
{
    cout << "I am templatised func() " << a << endl;
}
int main()
{
    func(4); //Exact match takes the highest priority
    return 0;
}
