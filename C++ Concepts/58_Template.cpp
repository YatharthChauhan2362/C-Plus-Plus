// Understanding the code below to calculate the DotProduct of all datatypes.
// This program was created by Yatharth Chauhan
/*
1. First and foremost, we defined a template with class T where T acts as a variable data type.
2. We then changed the data type of arr to T, changed its constructor to T from int, changed everything except the size of the vector, to a variable T. The function then returned T. This has now changed the class from specific to general. 
3. We then very easily added a parameter, while defining the vectors, of its data type. And the compiler itself transformed the class accordingly. Here we passed a float and the code handled it very efficiently.
4. The output we received was:
*/

#include <iostream>
using namespace std;

template <class T>
class vector
{
public:
    T *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotProduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    vector<float> v1(3); //vector 1 with a float data type
    v1.arr[0] = 1.4;
    v1.arr[1] = 3.3;
    v1.arr[2] = 0.1;

    vector<float> v2(3); //vector 2 with a float data type
    v2.arr[0] = 0.1;
    v2.arr[1] = 1.90;
    v2.arr[2] = 4.1;

    float a = v1.dotProduct(v2);
    cout << a << endl;
    return 0;
}