#include <iostream>
#include"Employee.h"
#include"Sales.h"

using namespace std;

int main()
{
    Employee andy("Andy",4);
    cout<<andy.getname()<<":$"<<andy.calcSalary()<<endl;

    Employee bill("Bill",4);
    cout<<bill.getname()<<":$"<<bill.calcSalary()<<endl;

    bill.setLevel(8);
    cout<<bill.getname()<<":$"<<bill.calcSalary()<<endl;

    Sales cook("Cook",7);
    cook.addSaleValue(1000000);
    cook.addSaleValue(2000000);
    cout<<cook.getname()<<":$"<<cook.calcSalary()<<endl;
    return 0;
}
