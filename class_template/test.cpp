#include<iostream>
using namespace std;
template<class T,class T2>
class Test
{
    T x;
    T2 name;
    public:
        void setX(T x)
        {
            this->x = x;
        }

        void setName(T2 name)
        {
            this->name = name;
        }

        void display()
        {
            cout<<"Value of x : "<<x<<endl;
            cout<<"Name is  : "<<name<<endl;

        }
};

int main()
{
    Test<int,string> t;
    t.setX(10);
    t.setName("Priyatam");
    cout<<"Hiii"<<endl;
    t.display();
    return 0;
}