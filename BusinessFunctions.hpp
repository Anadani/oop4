#ifndef BUSINESSFUNCTIONS_HPP
#define BUSINESSFUNCTIONS_HPP

#include <vector>

#include "HotdogStand.hpp"
#include "Money.hpp"


namespace MyAwesomeBusiness
{

    void runSimulation(std::vector <HotdogStand> &franchises, int days);
    
    void printRundown(const std::vector<HotdogStand> &franchises);
    
}

#endif /*NONMEMBER_HPP_*/
