// Employee.cpp
#include "Employee.h"
Employee::Employee(std::string name, int id, std::string employeeClass, int
experience)
: name(name), id(id), employeeClass(employeeClass),
experience(experience) {}
std::string Employee::getInfo() const {
return "Name: " + name + ", ID: " + std::to_string(id) + ", Class: " +
employeeClass +
", Experience: " + std::to_string(experience) + " months,
Salary: " + std::to_string(salary);
}
