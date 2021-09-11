//Function Objects (Functors) In C++ STL
// This program was created by Yatharth Chauhan

/*
--> What is a function object?

-> A function object is a function wrapped in a class so that it is available as an object.
-> That is, we can then use a function as an object. 
   The question that might have been raised in your mind would be, why to substitute a function with an object?
   The answer is to make them all usable in an Object-Oriented Programming paradigm. 

1. Be sure to include the header file < functional> before you do anything else.
2. And let’s create an array of some 6 elements.
3. Suppose we want to sort this array in ascending order. So we’ll include a header file <algorithm> and write the syntax of the sort object which is,

sort(address of first element, address of last element);
*/

#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main()
{
    // Function Objects (Functor) : A function wrapped in a class so that it is available like an object

    int arr[] = {1, 73, 4, 2, 54, 7};

    sort(arr, arr + 5);
    sort(arr, arr + 6, greater<int>());

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}