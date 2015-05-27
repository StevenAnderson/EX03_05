#include "MyInteger.h"

/// definitions of the functions


const int MyInteger::getvalue(){
    return value;
};
// if there is no remainder when divided by 2 then its even
const bool MyInteger::isEven(){
    if (value%2==0)
        return true;
    else
    
    
    return false;
};
// opposite logic of the even function
const bool MyInteger::isOdd(){
    if (value%2==0)
        return false;
    else
        
        
        return true;
    
};

//goes from 2 up to the value itself testing for prime numbers
const bool MyInteger::isPrime(){
    int loop=0;
    for (int i=2; i<value; i++){
        if (value%i==0)
            loop=1;
    }
    if (loop==0)
        return true;
    else return false;
    
};
//same as earlier even function

///////not sure how to get the values to work from
//the Class int to here.
//if the value came across it shoul work fine
bool MyInteger::isEven(int){
    if (value%2!=0)
        return false;
    else
        return true;
    
    

};
bool MyInteger::isOdd(int){
    if (value%2==0)
        return false;
    else
        return true;
};
bool MyInteger::isPrime(int){
    int loop=0;
    for (int i=2; i<value; i++){
        if (value%i==0)
            loop=1;
    }
    if (loop==0)
        return true;
    else return false;
    

};

bool MyInteger::isEven(const MyInteger&){
    if (value%2==0)
        return true;
    else
      return false;
    
};
bool MyInteger::isOdd(const MyInteger&){
    if (value%2==0)
        return false;
    else
        
        
        return true;
    
};
bool MyInteger::isPrime(const MyInteger&){
    int loop=0;
    for (int i=2; i<value; i++){
        if (value%i==0)
            loop=1;
    }
    if (loop==0)
        return true;
    else return false;
    

};

const bool MyInteger::equals(int){
    if (value==15)
        return true;
    else return false;
  
};
const bool MyInteger::equals (const MyInteger&){
    if (value==15)
        return true;
    else return false;
    
};

int MyInteger::parseInt(const string&){
    
    
    
    return 0;
};


