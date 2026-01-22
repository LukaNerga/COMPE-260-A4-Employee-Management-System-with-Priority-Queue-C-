COMPE-260 A4
Employee Management System with Priority Queue – C++

Author: Luka Nergadze
Language: C++

Project Overview

This project implements a simulated employee management system for a technology company. Employees include Developers and Testers, each with unique skills, experience, and qualifications. The system uses object-oriented programming principles (inheritance, polymorphism, encapsulation) and a priority queue to manage employees by their calculated salaries.

Features

Class Hierarchy with Inheritance

Abstract Employee base class

Derived classes: Developer, Tester

Specialized attributes and methods for each role

Salary Calculation

Salary is computed based on position, experience, and qualification level

Developers: additional salary for technology and level

Testers: adjusted salary based on experience and level

Priority Queue

Stores employees in order of salary (higher salary = higher priority)

Operations: addEmployee, deleteEmployee, printQueue

Uses std::priority_queue with a custom comparator

Driver Program

Creates multiple employee instances

Adds employees to the queue

Prints employees sorted by priority

Demonstrates polymorphism and operator overloading

How to Use

Clone the repository or download the code.

Compile the project:

g++ -o employee main.cpp Developer.cpp Tester.cpp PriorityQueue.cpp Employee.cpp


Run the program:

./employee


Output shows employees sorted by salary, using polymorphic getInfo().

Example Output
Employee Queue:
Name: Alice, ID: 1, Class: Developer, Experience: 36 months, Salary: 5000, Tech: .Net, Level: Senior
Name: Dave, ID: 4, Class: Tester, Experience: 48 months, Salary: 3940, Level: Senior
Name: Bob, ID: 2, Class: Developer, Experience: 24 months, Salary: 4300, Tech: React, Level: Middle
Name: Charlie, ID: 3, Class: Tester, Experience: 12 months, Salary: 2860, Level: Junior

Files

Employee.h/cpp – abstract base class for all employees

Developer.h/cpp – Developer subclass with tech and level

Tester.h/cpp – Tester subclass with level

PriorityQueue.h/cpp – Priority queue implementation using std::priority_queue

main.cpp – driver program to demonstrate functionality

What I Learned

Inheritance & Polymorphism – abstract base class with specialized subclasses

Encapsulation – common attributes centralized in Employee class

Custom Priority Queue – used custom comparator for sorting by salary

Operator Overloading – < operator to compare employees

Real-world Simulation – salary calculation logic for different roles

License

This project is open-source and intended for learning and academic purposes.
