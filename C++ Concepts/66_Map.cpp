// Map In C++ STL
// This program was created by Yatharth Chauhan

/*
A map in C++ STL is an associative container which stores key value pairs.
To elaborate, a map stores a key of some data type and its corresponding values of some data type. 
For example: a teacher wants to store the marks of students which in future can be accessed by their names. 
Here, keys are the student names, and their marks are the corresponding values.

-> The syntax for declaring a map is:
map <data_type_of_key, data_type_of_value> variable_name;

-> we can now write the program for storing the key value pairs of students' names and students’ marks keeping in mind the illustration above.

1. Include the header file map and string( if using string methods).
2. Let's create a map in which the key is a string (names) and the values are integers (marks), and we'll call it marksMap. 
3. And to assign some key a value, we use the index method. Here the index of a map element will be the students’ name and the value will be the marks.
4. Make some 4-5 elements.
5. Identify the iterator of this map by using the scope resolution operator.
6. Loop through the map elements using two map methods; begin() to point at the beginning of the map, and end() to point next to the last element of the map.
7. While we loop through the map, we use the dereference operator * to fetch the element present where the pointer is pointing to. And since a map stores element in a key value pair, we can use its first and second method to access the keys and the values respectively. .first accesses the first value of a pair that is our map key here, and .second accesses the second value of the pair that is our map values here.
8. There is one thing to keep in mind: Maps always sort these pairs by the key elements. You can review the output of the following snippet to see how these pairs are sorted.
*/

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    // Map is an associative array
    map<string, int> marksMap;

    marksMap["Yatharth"] = 98;
    marksMap["Harmini"] = 89;
    marksMap["Riya"] = 93;
    marksMap["Sujal"] = 78;
    marksMap["Dev"] = 66;

    marksMap.insert({{"Arpan", 55}, {"Rishabh", 72}});

    map<string, int>::iterator iter;

    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << endl;
    }
    return 0;
}