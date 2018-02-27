//Name: Karam Anadani
//Program4
//mywsu:D694N462
// This is the hotdog empire


#ifndef HOTDOGSTAND_HPP
#define HOTDOGSTAND_HPP

#include <iostream>
#include "Money.hpp"
#include <random>

namespace MyAwesomeBusiness

{

class HotdogStand

{

public:
    HotdogStand();
    HotdogStand(double val);
    HotdogStand(const Money &pricDog);
    const Money getCash() const; 
    const Money getPrice() const;
    int 	getDailyDogsSold() const; //number of hotdogs sold 
    void replenishSupplies(); 
    void payWorker(); 
    void dailyReset();
    
    
    

    const Money getStandRevenue() const; 
    void setPrice(double price);
    void sellHotdog(); //Increments 
    static int getNumStands();
    static int getTotalHotdogsSold();
    static const Money getTotalRevenue();
private:




    Money monStand; 
    Money pricEachHotdog; 
    int numHotdogSold;
    int cummuHotdogSold;
    Money hourlyWageEmp;
    int hoursWorked = 8;
    int hotdogSupply;
    int maxHotdog;
    Money wholesaleCost;
    static int numStands;
    static int totHotdogsSold;
    static Money totRevenue;

};


}

#endif
