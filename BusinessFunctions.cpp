//Name: Karam Anadani
//Program4
//mywsu:D694N462
// This is the hotdog empire




#include <iostream>
#include <iomanip>
#include <cmath>
#include <random>
#include <stdio.h>
#include "BusinessFunctions.hpp"



using std::setw;
using std::endl;
using std::cout;

namespace MyAwesomeBusiness{

void runSimulation(std::vector<HotdogStand> &franchises, int days) 



{
    
    
    std::random_device rd;  
    std::mt19937 generator(rd());  
    std::uniform_int_distribution<int> uni(1, 30);
    std::uniform_int_distribution<int> unid(20, 60);


    Money pro;
    //Money price = 0.00;


    for (int i = 0; i < days; i++) 
    
    {
        Money m, t;
        for (unsigned int j =0; j <franchises.size() ;j++)
        
        {
               franchises[j].sellHotdog();

               if((franchises[j].getPrice().getPennies())<=350) 
               
               {
                   for (int i = uni(generator); i != 0; i--)
                {
                    franchises[j].setPrice(3.50);
                    franchises[j].sellHotdog();
                }
            }
            else
            
            {
				
				
                for (int i = unid(generator); i != 0; i--)
                {
                    franchises[j].sellHotdog();
                }
            }
        
           franchises[i].dailyReset();
            printRundown(franchises);
            cout << endl;
		}

        for (unsigned int q = 0; q < franchises.size(); q++)
        {
            m = (franchises[q].getStandRevenue() + m);
        }

        int qas = 0;
        for (unsigned int y = 0; y < franchises.size(); y++)
        {
            qas = (franchises[y].getDailyDogsSold() + qas);
        }


        for (unsigned int z = 0; z < franchises.size(); z++)
        {
            t = (franchises[z].getCash() + t);
        }

        cout << "TOTALS" << setw(7) << i << setw(9) << m;
        cout << setw(10) << t;
        cout << "# of Stands: " << franchises.size() << endl;
}
}

       



void printRundown(const std::vector<HotdogStand> &franchises) 


{
     
     Money profit = 0.00;
     double sales = 0;
     Money k;
cout<<setw(5) <<"Stand"<<setw(8)<<"Sales" <<setw(8)<<"Price"<<setw(10)<<"Revenue"<<endl;
cout << "=====" << setw(8) << "=====" << setw(8) << "=====" << setw(10) << "======"<<endl;


        for (unsigned int i = 0; i < franchises.size(); i++)  
        {
            sales = franchises[i].getDailyDogsSold();
            k = (franchises[i].getCash());
            profit = franchises[i].getPrice();

            Money res;
            res = franchises[i].getStandRevenue();
            cout << std::setw(5) << i+1 << std::setw(8) <<sales << setw(4)<< profit << "\n";
            cout << setw(8) << res;
            cout << setw(10) << k << endl;
        }
    }
}

