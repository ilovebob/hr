#include "Sales.h"

Sales::~Sales()
{
}

void Sales::addSaleValue(int value){
    this->value+=value;
}

int Sales::calcSalary(){
    return level*SALARY_PER_LEVEL+BASE_SALARY+value/100;
}
