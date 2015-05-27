#include <iostream>
using namespace std;
//creating class MyInteger
class MyInteger{
public:
    //constructor
    MyInteger (int val){
        value=val;
    };
    
    int value;
    
    const int getvalue();
    const bool isEven();
    const bool isOdd();
    const bool isPrime();
    
    static bool isEven(int);
    static bool isOdd(int);
    static bool isPrime(int);
    
    static bool isEven(const MyInteger&);
    static bool isOdd(const MyInteger&);
    static bool isPrime(const MyInteger&);
    
    const bool equals(int);
    const bool equals (const MyInteger&);
    
    static int parseInt(const string&);
    
    
};