// Class Templates with Default Parameters
// This program was created by Yatharth Chauhan
/*
1. We’ll start by constructing a class named Yatharth.
2. We’ll then define a template with any number of arguments, let three, T1, T2, and T3. If you remember, we had this feature of specifying default arguments for functions, similarly we’ll mention the default parameters, let, int, float and char for T1, T2 and T3 respectively.
3. This ensures that if the user doesn’t put any data type in main, default ones get considered. 
4. In public, we’ll  define variables a, b and c of the variable data types T1, T2 and T3. And build their constructors. 
5. The constructor accepts the values featured by the main, and assigns them to our class variables a, b and c. If the user specifies the data types along with the values, the compiler assigns them to T1 , T2 and T3, otherwise gives them the default ones, as specified while declaring the template itself.
6. We’ll then create a void function display, just to print the values the user inputs.

7. Firstly, we’ll create an object, let's name it h, of the class Yatharth. And we’ll pass into it three values, an int, a float and a char, suppose 4, 6.4 and c respectively. Now since we have not specified the data types of the values we have just entered, the default data types, int, float and char would be considered. 
8. We’ll then display the values, which you’ll be seeing when we run the same.
9. And then we’ll create another object g, of the class Harry but this time, with the data types of our choice. Let’s specify them to be float, char and char.
10. We can then pass some values into it, suppose 1.6, o, and c and call the display function again.
11. These objects are sufficient to give us the main concept behind using a default parameter and the variety of classes we could make via this one template.
*/

#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>
class Yatharth
{
public:
    T1 a;
    T2 b;
    T3 c;
    Yatharth(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
    }
};
int main()
{
    Yatharth<> h(4, 6.4, 'c');
    h.display();

    cout << endl;

    Yatharth<float, char, char> g(1.6, 'o', 'c');
    g.display();
    return 0;
}