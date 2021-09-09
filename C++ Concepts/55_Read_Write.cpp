// File I/O in C++: Read/Write in the Same Program & Closing Files
// This program was created by Yatharth Chauhan

#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    // connecting our file with hout stream

    ofstream hout("YC.txt");

    // creating a name string variable and filling it with string entered by the user

    string name;
    cout << "Enter your name: ";
    cin >> name;

    // writing a string to the file

    hout << name + " is my name";

    // disconnecting our file

    hout.close();

    // connecting our file with hin stream

    ifstream hin("YC.txt");

    // creating a content string variable and filling it with string present there in the text file

    string content;
    hin >> content;
    cout << "The content of the file is: " << content;

    // disconnecting our file

    hin.close();
    return 0;
}
