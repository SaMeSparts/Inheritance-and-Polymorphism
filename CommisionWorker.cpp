#include "CommisionWorker.h"
#include <sstream>

using namespace std;

CommisionWorker::CommisionWorker(const string& name, int workingDays, double baseSalary, double commission, int itemsSold)
    : Employee(name, "CommisionWorker", workingDays, baseSalary),
      commission(commission > 0 ? commission : 0),
      itemsSold(itemsSold > 0 ? itemsSold : 0) {}

double CommisionWorker::calculateSalary() const {
    return (workingDays * baseSalary) + (commission * itemsSold);
}

string CommisionWorker::printSalary() const {
    ostringstream oss;
    oss << "Name: " << name << "\nType: " << type
        << "\nWorking Days: " << workingDays
        << "\nBase Salary: " << baseSalary
        << "\nCommission: " << commission
        << "\nItems Sold: " << itemsSold
        << "\nTotal Salary: " << calculateSalary() << "\n";
    return oss.str();
}

double CommisionWorker::getCommission() const { return commission; }
int CommisionWorker::getItemsSold() const { return itemsSold; }
void CommisionWorker::setCommission(double c) { commission = (c > 0) ? c : 0; }
void CommisionWorker::setItemsSold(int i) { itemsSold = (i > 0) ? i : 0; }
