// File I/O in C++: Reading Files
// This program was created by Yatharth Chauhan

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string st = "Yatharth Chauhan";

    // Opening files using constructor and writing it

    ofstream out("yc.txt"); // Write operation
    out << st;

    return 0;
}