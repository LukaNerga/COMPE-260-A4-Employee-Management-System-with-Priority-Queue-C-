# Employee Priority Queue System (C++ / OOP)

A simple **C++ object-oriented project** demonstrating **inheritance, polymorphism, operator overloading, and a priority queue** to manage employees based on their calculated salaries.

---

## Overview

- **Language:** C++
- **Paradigm:** Object-Oriented Programming (OOP)
- **Key Concepts Used:**
  - Abstract base classes
  - Inheritance
  - Virtual functions
  - Polymorphism
  - Operator overloading
  - Dynamic memory management
  - Priority-based ordering

---

## Project Description

This program models a small employee management system where different employee types  
(**Developers** and **Testers**) are stored in a **Priority Queue** and ordered by salary.

Each employee:
- Has a name, ID, class, experience (in months), and salary
- Calculates salary differently depending on their role
- Is sorted in the queue using the `<` operator (higher salary → higher priority)

---

## Class Structure

### Employee (Abstract Base Class)

- Common attributes shared by all employees
- Declares a **pure virtual function** for salary calculation

Key features:
- `calculateSalary()` → pure virtual
- `getInfo()` → virtual
- `<` operator overloaded for priority comparison

---

### Developer (Derived Class)

Extends `Employee` with:
- Technology stack (e.g., React, .NET)
- Skill level (`Junior`, `Middle`, `Senior`)

Salary calculation:
- Base salary: `3000`
- Level bonus:
  - Senior → `+2000`
  - Middle → `+1000`
- Experience bonus:
  - `+50` per month

---

### Tester (Derived Class)

- Inherits from `Employee`
- Salary depends on experience and tester level  
*(implementation assumed similar to Developer)*

---

### PriorityQueue

- Stores `Employee*`
- Orders employees based on salary using the overloaded `<` operator
- Supports:
  - Adding employees
  - Printing the queue in priority order

---

## Program Flow

1. Create a `PriorityQueue`
2. Dynamically allocate Developers and Testers
3. Add them to the queue
4. Print employees ordered by salary
5. Free allocated memory

---

## Example Output



Employee Queue:
Name: Dave, ID: 4, Class: Tester, Experience: 48 months, Salary: 5400
Name: Alice, ID: 1, Class: Developer, Experience: 36 months, Salary: 6800, Tech: .Net, Level: Senior
Name: Bob, ID: 2, Class: Developer, Experience: 24 months, Salary: 5200, Tech: React, Level: Middle
Name: Charlie, ID: 3, Class: Tester, Experience: 12 months, Salary: 3600



Notes
Memory is managed manually using new and delete
Employee destructor is virtual to prevent memory leaks
Priority ordering is based on salary, not insertion order
Designed as a learning project for OOP fundamentals
Possible Improvements
Use smart pointers (std::unique_ptr)
Replace custom priority queue with std::priority_queue
Add file input/output
Add more employee roles
