#ifndef COMMISIONWORKER_H
#define COMMISIONWORKER_H

#include "Employee.h"

class CommisionWorker : public Employee {
private:
    double commission;
    int itemsSold;

public:
    CommisionWorker(const string& name, int workingDays, double baseSalary, double commission, int itemsSold);

    double calculateSalary() const override;
    string printSalary() const override;

    double getCommission() const;
    int getItemsSold() const;
    void setCommission(double commission);
    void setItemsSold(int items);
};

#endif
