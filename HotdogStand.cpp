


#include <iostream>
#include "HotdogStand.hpp"
#include <cmath>

namespace MyAwesomeBusiness

{

int HotdogStand::totHotdogsSold = 0;
int HotdogStand::numStands = 0;
Money HotdogStand::totRevenue = 0.00;
//Static initialization occurs outside the Class

//HotDogStand constructors initializing


HotdogStand::HotdogStand() {
    monStand = 0;
    pricEachHotdog = 3.50;
    numHotdogSold = 0;
    cummuHotdogSold = 0;
    hourlyWageEmp = 7.25;
    hoursWorked = 8;
    hotdogSupply = 60;
    maxHotdog = 60;
    wholesaleCost = 0.15;
    numStands++;
}

HotdogStand::HotdogStand(double val) 

{
    monStand = 0;
    pricEachHotdog = val;
    numHotdogSold = 0;
    cummuHotdogSold = 0;
    
    
    if (pricEachHotdog > 3.50 || pricEachHotdog == 7.25) 
    {
        hourlyWageEmp = 7.25; 
    }
    hoursWorked = 8;
    
    if (pricEachHotdog > 3.50 || pricEachHotdog == 7.25) 
    {
        hotdogSupply = 30; 
    }
    maxHotdog = hotdogSupply;
    
    if (pricEachHotdog > 3.50 || pricEachHotdog == 0.15) 
    
    {
        wholesaleCost = 0.50; 
    }
    
    
    numStands++;
}
HotdogStand::HotdogStand(Money const &pricDog) 
{
	
	
    monStand = 0;
    pricEachHotdog = pricDog;
    numHotdogSold = 0;
    cummuHotdogSold = 0;
    if (pricEachHotdog > 3.50 || pricEachHotdog == 7.25) 
    
    {
        hourlyWageEmp = 7.25; 
    }
    
    
    hoursWorked = 8;
    
    if (pricEachHotdog > 3.50 || pricEachHotdog == 7.25) 
    {
        hotdogSupply = 30; 
    }
        
    maxHotdog = hotdogSupply;
    
    if (pricEachHotdog > 3.50 || pricEachHotdog == 0.15) 
    
    {
        wholesaleCost = 0.50; 
    }
    numStands++;
}

const Money HotdogStand::getCash() const 
{
    return monStand;
}

const Money HotdogStand::getPrice() const 
{
    return pricEachHotdog;
}

int HotdogStand::getDailyDogsSold() const 
{
    return numHotdogSold;
}

void HotdogStand::replenishSupplies() 
{
    hotdogSupply = numHotdogSold;
    Money totSto = hotdogSupply * wholesaleCost;
    monStand = monStand - totSto;

}

void HotdogStand::payWorker() {
    Money workPay = hoursWorked * hourlyWageEmp;
    monStand = monStand - workPay;
}

void HotdogStand::dailyReset() {
    monStand = 0;
    numHotdogSold = 0;
    hourlyWageEmp = 7.25;
    hoursWorked = 0;
}

const Money HotdogStand:: getStandRevenue() 

const 
{
    return totRevenue; 
}

void HotdogStand::setPrice(double price)

{
    pricEachHotdog = price;
}

void HotdogStand::sellHotdog()

{
    numHotdogSold++;
    cummuHotdogSold++;
}

int HotdogStand::getNumStands() 
{
    return numStands;
}

int HotdogStand::getTotalHotdogsSold() 
{
     return totHotdogsSold;
}

const Money HotdogStand::getTotalRevenue()
{
    return totRevenue;
}
}
