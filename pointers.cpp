#include <iostream>
using namespace std;
int main()
{
    int a = 40;
    int *ptr;
    ptr = &a;
    cout << ptr << endl;
    cout << *ptr << endl;
}