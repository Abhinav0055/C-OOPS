/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class complex{
    int real,imag;
    public:
    complex(){
        real=imag=0;
    }
    complex(int r,int i=5){
        real=r,imag=i;
    }
    void disp{
    cout<<real<<"+"<<imag<<"i";
    };

};
    
int main()
{
    complex C1(5);
    complex C2(10,20);

    return 0;
}