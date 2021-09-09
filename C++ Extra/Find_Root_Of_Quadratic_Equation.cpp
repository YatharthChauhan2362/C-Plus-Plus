#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, x1, x2, x3, discriminate, real_part, imaginary_part;

    cout << "Enter coefficients of a, b, c : ";
    
    cin >> a >> b >> c;

    discriminate = b * b - 4 * a * c;

    if (discriminate > 0)
    {
        cout << "Roots are real and diffrent" << endl;

        x1 = (-b + sqrt(discriminate)) / (2 * a);
        x2 = (-b - sqrt(discriminate)) / (2 * a);

        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }

    else if (discriminate == 0)
    {
        cout << "Roots are real and same" << endl;

        x1 = -b / (2 * a);

        cout << "x1 = x2 = " << x1 << endl;
    }

    else
        {
            cout << "Roots are complex and different" << endl;

            real_part = -b / (2 * a);
            imaginary_part = (discriminate) / (2 * a);

            cout << "x1 = " << real_part << "+" << imaginary_part << "i" << endl;
            cout << "x1 = " << real_part << "-" << imaginary_part << "i" << endl;
        }
}