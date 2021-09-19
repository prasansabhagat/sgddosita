#include <iostream>
using namespace std;
//int size 4 bytes... char 1 byte..
int main(){

    int a = 10;
    int *p;
    p = &a;
    cout << p << " " << *p << " " << (p + 2) << " " << *(p+2);
    char *p0;
    p0 = (char*)p;
    cout << p0 << " " << *p0;
}