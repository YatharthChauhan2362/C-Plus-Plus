// Basic Input/Output & More in C++
// This program was created by Yatharth Chauhan

#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter the value of no. 1: " << endl; /* '<<' is called Insertion operator */
    cin >> num1;                                  /* '>>' is called Extraction operator */

    cout << "Enter the value of no. 2: " << endl; /* '<<' is called Insertion operator */
    cin >> num2;                                  /* '>>' is called Extraction operator */

    cout << "The sum is " << num1 + num2;

    return 0;
}