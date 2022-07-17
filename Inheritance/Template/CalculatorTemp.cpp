#include<iostream>
using namespace std;

int sum(int n1,int n2){
    return n1+n2;
}
int mul(int n1,int n2){
    return n1*n2;
}
int divi(int n1,int n2){
    return n1/n2;
}

double sum(double n1,double n2){
    return n1+n2;
}
double sub(double n1,double n2){
    return n1-n2;
}
double mul(double n1,double n2){
    return n1*n2;
}
double divi(double n1,double n2){
    return n1/n2;
}
 template<class U, class B>
U sum(U n1,U n2){
    return n1+n2;
}
U mul(U n1,U n2){
    return n1*n2;
}
U divi(U n1,U n2){
    return n1/n2;
}
B sum(B n1,B n2){
    return n1+n2;
}
B sub(B n1,B n2){
    return n1-n2;
}
B mul(B n1,B n2){
    return n1*n2;
}
B divi(B n1,B n2){
    return n1/n2;
}