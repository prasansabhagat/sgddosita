#include <iostream>
#include<deque>
using namespace std;
int main()
{
    //deque
    deque<int> d;
    d.push_back(3);
    d.push_front(6);
    for(int i:d)  cout<<i;
    return 0;
}