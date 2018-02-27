#include <iostream>
#include "Money.hpp"
#include <cmath>
#include <string>



using std::istream;
using std::ostream;
using std::cout;
using std::cin;

namespace MyAwesomeBusiness


{

Money::Money() {
    dollars = 0;
    cents = 0;
}
Money::Money(int dol, int cen) 

{
    this->dollars = dol;
    this->cents = cen;
}
Money::Money(int dol) 

{
    dollars = dol;
    cents = 0;
}

Money::Money(double value) 


{
    int cash;
    cash = value * 100;
    dollars = cash/100;
    cents = cash % 100;
}




int Money::getPennies() const 

{
    return dollars * 100 + cents;
}

bool Money::isNegative() const 


{
    if (dollars < 0)
{
        return true;
}
    else 
    
    {
        return false;
    }
}

const Money Money::operator -() const 

{
    return Money(-dollars,-cents);
}

Money& Money::operator++ () 

{
    ++dollars;
    return *this;
}
const Money Money::operator++ (int) 

{
    int dola = dollars;
    ++(*this);
    return dola;
}

Money& Money::operator-- () 

{
    --dollars;
    return *this;
}
const Money Money::operator-- (int) 

{
    int dola = dollars;
    --(*this);
    return dola;
}

const Money operator +(const Money& obj1, const Money& obj2) 

{
     return Money(obj1.getPennies() + obj2.getPennies());
}
const Money operator *(const Money& obj1, int obj2)

{
    return  Money(obj1.getPennies() * obj2); 
}
 const Money operator *(int obj1, const Money& obj2) 
 
{
     return  Money(obj2.getPennies() * obj1);
}
 const Money operator *(const Money& obj1, double obj2)
 
{
     return  Money(obj1.getPennies() * obj2);
}
const Money operator *(double obj1, const Money& obj2)

{
     return  Money(obj2.getPennies() * obj1);
}

bool operator <(const Money& obj1 , const Money& obj2)

{
    return (obj1.getPennies() < obj2.getPennies());
}
bool operator <=(const Money& obj1 , const Money& obj2)

{
    return (obj1.getPennies() <= obj2.getPennies());
}
bool operator >(const Money& obj1 , const Money& obj2)

{
    return (obj1.getPennies() > obj2.getPennies());
}
bool operator >=(const Money& obj1 , const Money& obj2)

{
    return (obj1.getPennies() >= obj2.getPennies());
}

bool operator ==(const Money& obj1 , const Money& obj2)

{
    return (obj1.getPennies() == obj2.getPennies());
}
bool operator !=(const Money& obj1 , const Money& obj2)

{
    return (obj1.getPennies() != obj2.getPennies());
}
int operator -(const Money& obj1, const Money& obj2)
{
    if (obj1.getPennies() <= obj2.getPennies()) 
    
    {
        std::cout << "ERROR: left operand must be later date than right operand.\n";
        return 0;
    }

    return (obj1.getPennies() - obj2.getPennies());
}
std::ostream& operator <<(std::ostream& outStream, const Money& obj2) 

{
    int absDollars = abs(obj2.dollars);
    int absCents = abs(obj2.cents);

    if((obj2.cents < 10 && obj2.cents >= 0) || (obj2.cents > -10 && obj2.cents <0))
    
    {
        outStream << "($" << absDollars;
    }
    else
    
    {
        outStream << "$" << absDollars;
    }

    if(absCents >=10)
    
    {
        outStream << "." << absCents;
    }
    else 
    
    {
        outStream << "." << "0" << absCents << ")";
    }

    return outStream;
    
    
    
}



std::istream& operator >>(std::istream& inStream, Money& obj2){

    std::string input;
		inStream >> input; 
		double price;

		if(input[0]== '$'){
			input = input.erase(0,1);
			price = std::stod(input);
		}
		else{
			price = std::stod(input);
		}
			obj2 = price;

		return inStream;
	}
 
}
