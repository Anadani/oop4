#ifndef MONEY_HPP
#define MONEY_HPP


#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
#include <stdio.h>

using std::istream;
using std::ostream;

namespace MyAwesomeBusiness{

class Money {

public:
    Money();
    Money(int dol, int cen);
    Money(int dol);
    Money(double value);
    //Accessor 
    
    
    
    int getPennies() const;
    bool isNegative() const;
    
    
    
    const Money operator -() const;
    Money& operator++ ();
    const Money operator++ (int);
    Money& operator-- ();
    const Money operator-- (int);
    friend const Money operator +(const Money& obj1, const Money& obj2);
    friend const Money operator *(const Money& obj1, int obj2);
    friend const Money operator *(int obj1, const Money& obj2);
    friend const Money operator *(const Money& obj1, double obj2);
    friend const Money operator *(double obj1, const Money& obj2);
    friend bool operator <(const Money& obj1 , const Money& obj2);
    friend bool operator <=(const Money& obj1 , const Money& obj2);
    friend bool operator >(const Money& obj1, const Money& obj2);
    friend bool operator >=(const Money& obj1 , const Money& obj2);
    friend bool operator ==(const Money& obj1 , const Money& obj2);
    friend bool operator !=(const Money& obj1 , const Money& obj2);
    friend std::ostream& operator <<(std::ostream& outStream, const Money& obj2);
    friend std::istream& operator >>(std::istream& inStream, Money& obj2);

private:
    int dollars;
	  int cents;
};

int operator -(const Money& obj1, const Money& obj2);
}

#endif /*Money_HPP_*/
