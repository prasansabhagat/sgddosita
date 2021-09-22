#include <iostream>
#include<array>
#include<vector>
using namespace std;
int main()
{
    //array
    array<int, 4> a = {1,2,3,4};
    int size = a.size();
    for(int i=0; i<size; i++) cout<<a[i]<<endl;
    cout << a.at(2)<<endl;
    cout << a.empty()<<endl;
    cout << a.front() << " " << a.back() <<endl;

    //vector- dynamic array, if the max size is reached, then a new vector of double size is made 
    vector<int> v;

    vector<int> s(5,1);
    for(int i:s) cout<<i;

    v.push_back(3);
    cout<<v.capacity()<<endl;
    v.push_back(5);
    cout << v.capacity() << endl;
    v.push_back(7);
    cout << v.capacity() << endl;
    cout << v.size() << endl;
    cout<<v.at(2);//front(), back(), pop_back()
    v.clear();
    cout << v.capacity() << " " << v.size() << endl;
    return 0;
}