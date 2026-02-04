#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int *ptr = &a;
    cout << ptr << endl;
    ptr++; // It will increase address by 1 byte(integer size)
    cout << ptr << endl;
    int nums[] = {1, 2, 3, 4, 5, 6}; // nums is array but also a pointer(a constant pointer) whose address cannot be changed.

    cout << *nums << endl;       // prints 1 as it has address for 0th index
    cout << *(nums + 1) << endl; // prints 2 as it has address for 1 index
    cout << *(nums + 2) << endl; // prints 3 as it has address for 2 index
    cout << *(nums + 3) << endl; // prints 4 as it has address for 3 index
    return 0;
}