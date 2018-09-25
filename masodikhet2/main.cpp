#include <iostream>

using namespace std;

int main()
{
    int a = 1;
    int c = 0;
    while(a!=0){
            a = a >> 1;
            c = c + 1;
    }
    cout << c << '\n';
    return 0;
}
