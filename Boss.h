#ifndef BOSS_H
#define BOSS_H

#include "Employee.h"

class Boss : public Employee {
private:
    double bonus;

public:
    Boss(const string& name, int workingDays, double baseSalary, double bonus);

    double calculateSalary() const override;
    string printSalary() const override;

    double getBonus() const;
    void setBonus(double bonus);
};

#endif
