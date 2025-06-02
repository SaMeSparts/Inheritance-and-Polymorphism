#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

using namespace std;

class Employee {
protected:
    string name;
    string type;
    int workingDays;
    double baseSalary;

public:
    Employee(const string& name, const string& type, int workingDays, double baseSalary);

    virtual double calculateSalary() const;
    virtual string printSalary() const;

    string getName() const;
    string getType() const;
    int getWorkingDays
