// Developer.cpp
#include "Developer.h"
Developer::Developer(std::string name, int id, int experience, std::string
tech, std::string level)
: Employee(name, id, "Developer", experience), technology(tech),
level(level) {
salary = calculateSalary();
}
double Developer::calculateSalary() {
double baseSalary = 3000; // base amount
if (level == "Senior") baseSalary += 2000;
else if (level == "Middle") baseSalary += 1000;
return baseSalary + (experience * 50);
}
std::string Developer::getInfo() const {
return Employee::getInfo() + ", Tech: " + technology + ", Level: " +
level;
}
