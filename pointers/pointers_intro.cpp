#include<iostream>
using namespace std;
//int - 4bytes, char- 1 byte, float- 4 bytes

int main()
{
    int a = 10;
    int* p;//this points to 'a' itself, using pointer we can both access and modify the data!
    p = &a;
    int **q = &p ; // pointer to pointer
    cout << a  << "\n"
         << &a << "\n"
         << p  << "\n"
         << &p << "\n"
         << *p << "\n" //= 10->defrencing.. *p  value is the value of 'a' itself!!
         << q; 

}