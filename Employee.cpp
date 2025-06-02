#include "Employee.h"
#include <sstream>

using namespace std;

Employee::Employee(const string& name, const string& type, int workingDays, double baseSalary)
    : name(name), type(type), workingDays(workingDays), baseSalary(baseSalary) {}

double Employee::calculateSalary() const {
    return workingDays * baseSalary;
}

string Employee::printSalary() const {
    ostringstream oss;
    oss << "Name: " << name << "\nType: " << type
        << "\nWorking Days: " << workingDays
        << "\nBase Salary: " << baseSalary
        << "\nTotal Salary: " << calculateSalary() << "\n";
    return oss.str();
}

string Employee::getName() const { return name; }
string Employee::getType() const { return type; }
int Employee::getWorkingDays() const { return workingDays; }
double Employee::getBaseSalary() const { return baseSalary; }

void Employee::setName(const string& n) { name = n; }
void Employee::setType(const string& t) { type = t; }
void Employee::setWorkingDays(int d) { workingDays = d; }
void Employee::setBaseSalary(double s) { baseSalary = s; }
