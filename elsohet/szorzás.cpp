#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout << "please write two numbers" << endl;
    cin >> a;
    cin >> b;
    a=a*b;
    b=a/b;
    a=a/b;
    cout << a << " " << b;
}
