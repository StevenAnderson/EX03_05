#include "MyInteger.h"
int main(){
    //sets the value
    int int1=15;
    //creates object
    MyInteger I1(int1);
    I1.getvalue();
    I1.isEven();
    I1.isOdd();
    I1.isPrime();
    
    I1.isEven(int1);
    I1.isOdd(int1);
    I1.isPrime(int1);
    
    I1.isEven(I1&);
    I1.isOdd(I1&);
    I1.isPrime(I1&);
    
    I1.equals(int1);
    I1.equals(I1&);
    
    parseInt(string&);
    
    
    return 0;
    
}