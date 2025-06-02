#include "Boss.h"
#include <sstream>

using namespace std;

Boss::Boss(const string& name, int workingDays, double baseSalary, double bonus)
    : Employee(name, "Boss", workingDays, baseSalary), bonus(bonus > 0 ? bonus : 0) {}

double Boss::calculateSalary() const {
    return (workingDays * baseSalary) + bonus;
}

string Boss::printSalary() const {
    ostringstream oss;
    oss << "Name: " << name << "\nType: " << type
        << "\nWorking Days: " << workingDays
        << "\nBase Salary: " << baseSalary
        << "\nBonus: " << bonus
        << "\nTotal Salary: " << calculateSalary() << "\n";
    return oss.str();
}

double Boss::getBonus() const { return bonus; }
void Boss::setBonus(double b) { bonus = (b > 0) ? b : 0; }
