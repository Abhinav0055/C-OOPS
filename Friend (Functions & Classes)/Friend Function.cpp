#include <iostream>
using namespace std;

class B;
class A{
    int a;
    public:
    void setValue(int x){
        a=x;
    };
    friend int max(A,B);
    friend int min(A,B);
    friend float mean(A,B);
};

class B{
    int b;
    public:
    void setValue(int y){
        b=y;
   };
    friend int max(A,B);
    friend int min(A,B);
    friend float mean(A,B);
};

int max(A obj1,B obj2){
    if(obj1.a>obj2.b){
        return obj1.a;
    }
    else{
        return obj2.b;
    };
};

int min(A obj1,B obj2){
    if (obj1.a<obj2.b){
        return obj1.a;
    }
    else{
        return obj2.b;
    };
};

float mean(A obj1,B obj2){
    float r;
    r = (obj1.a + obj2.b)/2;
    return r;
    
};


int main()
{
    A obj1;
    B obj2;
    obj1.setValue(10);
    obj2.setValue(80);
    cout<<max(obj1,obj2)<<endl;
    cout<<min(obj1,obj2)<<endl;
    cout<<mean(obj1,obj2)<<endl;
    return 0;
};
