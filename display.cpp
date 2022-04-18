#include <iostream>
using namespace std;

class C{
    int x;
    public:
    void setValue(int i){
        x=i;
        
    }
    
    friend void display();    
    };
    
    void display(){
        C obj;
        obj.setValue(20);
        cout<<obj.x;
    }
int main()
{
    display();
};
