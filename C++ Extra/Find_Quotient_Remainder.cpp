// // #include <iostream>
// // using namespace std;

// // int main()
// // {
// //     int dividend, divisor, quotient, remainder;

// //     cout << "Enter dividend: ";
// //     cin >> dividend;

// //     cout << "Enter divisor: ";
// //     cin >> divisor;

// //     quotient = dividend / divisor;
// //     remainder = dividend % divisor;

// //     cout << "Quotient: " << quotient << endl;
// //     cout << "Remainder: " << remainder << endl;
// // }

// /*(b)   this pointer*/
// #include <iostream>
// using namespace std;
// class student
// {
//     int roll_no;
//     float age;

// public:
//     student(int r, float a)
//     {
//         roll_no = r;
//         age = a;
//     }
//     student &greater(student &x)
//     {
//         if (x.age >= age)
//             return x;
//         else
//             return *this;
//     }
//     void display()
//     {
//         cout << "Roll No " << roll_no << endl;
//         cout << "Age " << age << endl;
//     }
// };
// int main()
// {
//     student s1(23, 18), s2(30, 20), s3(45, 16);
//     student s = s1.greater(s3);
//     cout << "Elder Person is :" << endl;
//     s.display();
// }
#include <iostream>
using namespace std;

int f(int x)
{
    return x * 2 - 1;
}

int main()
{
    int a = 3;
    int b = f(a) + f(4);
    return b;
}