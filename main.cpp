// main.cpp
#include <iostream>
#include "Developer.h"
#include "Tester.h"
#include "PriorityQueue.h"
int main() {
PriorityQueue pq;
Developer* dev1 = new Developer("Alice", 1, 36, ".Net", "Senior");
Developer* dev2 = new Developer("Bob", 2, 24, "React", "Middle");
Tester* tester1 = new Tester("Charlie", 3, 12, "Junior");
Tester* tester2 = new Tester("Dave", 4, 48, "Senior");
pq.addEmployee(dev1);
pq.addEmployee(dev2);
pq.addEmployee(tester1);
pq.addEmployee(tester2);
std::cout << "Employee Queue:\n";
pq.printQueue();
delete dev1;
delete dev2;
delete tester1;
delete tester2;
return 0;
}
