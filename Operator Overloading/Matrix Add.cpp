#include <iostream>

using namespace std;

class matrix{
    int mat[3][3];
    public:
    void set(){
        int i,j;
        for(i=0;i<=2;i++){
            for(j=0;j<=2;j++){
                cin>>mat[i][j];
            }
        }
        
    }
    
    matrix operator+(matrix m2){
        int i,j;
        matrix m3;
        for(i=0;i<=2;i++){
            for(j=0;j<=2;j++){
                m3.mat[i][j]=mat[i][j]+m2.mat[i][j];
            }
        }
        return m3;
    }
};



int main()
{
    matrix m1,m2,m3,m4;
    m1.set();
    m2.set();
    m3=m1+m2;
    m4.disp();

    return 0;
}