#include <iostream>

using namespace std;

class A{
    int x;
    public:
    A(){
        cout<<"A's const"<<endl;
    }
    ~A(){
        cout<<"A's dest"<<endl;
    }
    
};

class B:public A{
    int y;
    public:
    B(){
        cout<<"B's const"<<endl;
    }
    ~B(){
        cout<<"B's dest"<<endl;
    }
    
};

int main()
{
    B obj;

    return 0;
}