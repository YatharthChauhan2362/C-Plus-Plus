// List in C++
// This program was created by Yatharth Chauhan

/*
-> A List is a bi-directional linear storage of elements. Few key features as to why a list should be used is,

1. It gives faster insertion and deletion operations.
2. Its access to random elements is slow.

-> Write some code using lists and its methods

1. Before using lists, we must include the header file <list>.
2. Using a simple program, we'll iterate through the list and display its contents.
3. As we did for vectors, first define a list list1.
4. And push_back a few elements, and pass the list to a display function via reference.
5. Due to the fact that a list element cannot be directly accessed by its index, we must traverse through each element and print them.
6. We define a list iterator using this syntax:

*/

#include <iostream>
#include <list>

using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
}

int main()
{

    list<int> list1; //empty list of 0 length

    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);

    display(list1);

    list1.sort();

    cout << endl;
    display(list1);

    cout << endl;
    list1.pop_back();
    display(list1);

    cout << endl;
    list1.pop_front();
    display(list1);

    cout << endl;
    list1.remove(9);
    display(list1);

    cout << endl;
    list1.reverse();
    display(list1);

    list<int> list2(3); //empty list of length 3
    list<int>::iterator it = list2.begin();

    cout << endl;
    *it = 45;
    it++;
    *it = 6;
    it++;
    *it = 9;
    it++;

    display(list2);

    return 0;
}