#include <iostream>
#pragma once
#include "timeOfDay.h"

namespace hannayoung2693327
{
   class alarm
   {
    private:
        timeOfDay wakeTime;
        bool inActive;
    public:
        alarm(timeOfDay t = timeOfDay{1,1}, bool a = false)
        : wakeTime{t}, inActive{a}
        {

        }
        
        void print(){
            wakeTime.print();
            std::cout << " alarm is " << ((inActive)? "on" : "off")<<".\n";
        }


        const timeOfDay& getWakeTime() { return wakeTime;}
        void setWakeTime(const timeOfDay& t){wakeTime =t;}
   } ;
}