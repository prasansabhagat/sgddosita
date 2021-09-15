#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int *pAddress;//this points to a itself, using pointer we can both access and modify the data!
    pAddress = &a;

    cout << a << "\n"
         << &a << "\n"
         << pAddress << "\n"
         << &pAddress << "\n"
         << *pAddress; //defrencing.. *pAddress value is the value of a itself!!
git add -a
