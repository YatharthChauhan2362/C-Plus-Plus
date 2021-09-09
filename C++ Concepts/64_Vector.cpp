// Vector In C++ STL
// This program was created by Yatharth Chauhan

#include <iostream>
#include <vector>
using namespace std;

/*
---> push_back() and size():
1. First of all, don't forget to include the header file, <vector>.
2. Vectors have a method, push_back(), to insert elements in it from the rear end.
3. We’ll define a variable, size, to store the size of the vector.
4. We’ll then run a loop of size length, to receive the user input and push them back in the vector vec1.
5. We’ll then call the display function.
6. We want to have a display function to display the contents of the vector. And pass reference of vec1 to the function.
7. We have another method size() which returns the size of the vector. We’ll use this to traverse through all the elements and print them.
8. So, this is how a vector gets used.
*/

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> vec;
    int element, size;

    cout << "Enter the size of your vector: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter an element to add to this vector: ";
        cin >> element;

        vec.push_back(element);
    }
    display(vec);

    // pop_back():
    // This method of vectors, deletes the last element of the vector.

    vec.pop_back();
    display(vec);

    // Insert (iterator, element to insert):
    // This method of vectors inserts an element to the position the iterator is pointing to.

    // Using begin () points the iterator to the starting of the vector.
    // We can now increment the pointer according to our choice and insert any element at that position.

    vector<int>::iterator iter = vec.begin();
    vec.insert(iter, 23);
    display(vec);

    //We have different ways to declare a vector.

    // 1. First one is a vector with no length and elements specified.
    // 2. Second one is a vector of length 4 and no elements.
    // 3. Third one is a vector made from the second one.
    // 4. And last one, is a vector with length 6 and all the elements being 3.

    vector<int> vec1;        //zero length integer vector
    vector<char> vec2(4);    //4-element character vector
    vector<char> vec3(vec2); //4-element character vector from vec2
    vector<int> vec4(6, 3);  //6-element vector of 3s

    return 0;
}