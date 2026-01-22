// Developer.h
#ifndef DEVELOPER_H
#define DEVELOPER_H
#include "Employee.h"
class Developer : public Employee {
std::string technology;
std::string level; // Senior, Middle, Junior
public:
Developer(std::string name, int id, int experience, std::string tech,
std::string level);
double calculateSalary() override;
std::string getInfo() const override;
};
#endif // DEVELOPER_H
