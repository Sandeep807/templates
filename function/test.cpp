#include<iostream>
using namespace std;

template<class T>
void fun(T x , T y)
{
    cout<<"Sum of two number "<<x+y<<endl;
}

int main()
{
    fun(15.5f,20.5f);
    return 0;
}