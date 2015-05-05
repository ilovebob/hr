#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED

#include <string>
using namespace std;
#define SALARY_PER_LEVEL 1000
#define BASE_SALARY 5000

class Employee
{
    public:
        Employee(string name,int level);
        ~Employee();
        string getname(){
            return name;
        }
        int calcSalary();
        void setLevel(int level){
            this->level=level;
        }
    protected:
        int level;
    private:
        string name;
};


#endif // EMPLOYEE_H_INCLUDED
