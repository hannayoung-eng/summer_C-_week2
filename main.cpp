#include "alarm.h"
#include <array>
namespace hannayoung2693327
{
    void printAlarmArray(const alarm a[], const int n)
    {
        for(int i =0; i<n;++i)
        std::cout <<a[i];
    }
}

int main()
    {
        using namespace hannayoung2693327;
        const int n{4};
        alarm a[n];
        a[0]=alarm{"morning", {5,30},1};
        a[1].setName("class");
        a[1].setWakeTime({9,0});
        a[1].setActive(1);
        a[1].print();
        // a[2].input();
        // a[2].print();
        std::cin >>a[3];
        printAlarmArray(a,n);
        std::array<alarm, n> b;
        for (int i =0;i<b.size();++i)
            b.at(i) = a[1];
        for (const auto& bi : b)
            bi.print();
        // timeOfDay t1, t2;
        // std::cin >>t1>>t2;
        // std::cout <<t1<<" "<<t2<<'\n';
        // std::cout << ++t2 <<'\n';
        // std::cout << t2++<<'\n';
        // std::cout <<t2 <<'\n';

        // if (t1==t2) std::cout << "same\n";
        // else std::cout <<"different\n";
        // std::cout << t1+t2<<std::endl;
        return 0;

        // alarm a1;
        // a1.print();
        // alarm a2{timeOfDay{11,44},1};
        // a2.print();
        // if (compareTimeOfDay(a1.getWakeTime(),a2.getWakeTime()))
        // std::cout<<"same\n";
        // else std::cout<<"different\n";
    }
