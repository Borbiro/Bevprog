#include <iostream>

using namespace std;

int main()
{
    int a=9;
    int b=3;

    a = a xor b;
    b = b xor a;
    a = a xor b;

    cout << a << " " << b << endl;
}
