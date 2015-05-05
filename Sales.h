#ifndef SALES_H_INCLUDED
#define SALES_H_INCLUDED

#include"Employee.h"

class Sales: public Employee
{
    public:
        Sales(string name,int level):Employee(name,level){};
        ~Sales();
        void addSaleValue(int value);
        int calcSalary();
    protected:
    private:
        int value=0;

};



#endif // SALES_H_INCLUDED
