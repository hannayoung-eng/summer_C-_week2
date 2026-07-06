#include "alarm.h"
#include "timeOfDay.h"
#include <iostream>

namespace hannayoung2693327
{
    bool compareTimeOfDay(const timeOfDay& t1, const timeOfDay& t2)
    {
        return t1.getHour()==t2.getHour() && t1.getMinute()==t2.getMinute();
    }
}

int main()
    {
        using namespace hannayoung2693327;
        timeOfDay t1, t2;
        std::cin >>t1>>t2;
        std::cout <<t1<<" "<<t2<<'\n';
        std::cout << ++t2 <<'\n';
        std::cout << t2++<<'\n';
        std::cout <<t2 <<'\n';

        if (t1==t2) std::cout << "same\n";
        else std::cout <<"different\n";
        std::cout << t1+t2<<std::endl;

        return 0;

        // alarm a1;
        // a1.print();
        // alarm a2{timeOfDay{11,44},1};
        // a2.print();
        // if (compareTimeOfDay(a1.getWakeTime(),a2.getWakeTime()))
        // std::cout<<"same\n";
        // else std::cout<<"different\n";
    }
