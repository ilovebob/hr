#include"Employee.h"

Employee::Employee(string name,int level):name(name),level(level)
{
}

Employee::~Employee()
{
}

int Employee::calcSalary(){
    return level*SALARY_PER_LEVEL+BASE_SALARY;
}
