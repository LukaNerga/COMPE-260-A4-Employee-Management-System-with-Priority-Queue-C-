// Employee.h
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
class Employee {
protected:
std::string name;
int id;
std::string employeeClass;
double salary;
int experience; // in months
public:
Employee(std::string name, int id, std::string employeeClass, int
experience);
virtual ~Employee() = default;
virtual double calculateSalary() = 0; // Pure virtual function
virtual std::string getInfo() const;
bool operator<(const Employee& other) const {
return salary < other.salary; // for priority queue
}
};
#endif // EMPLOYEE_H
