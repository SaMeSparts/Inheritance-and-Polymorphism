#include <iostream>
#include <vector>
#include "Employee.h"
#include "Boss.h"
#include "CommisionWorker.h"

using namespace std;

int main() {
    vector<Employee*> employees;

    Boss* boss1 = new Boss("Alice", 20, 500, 2000);
    CommisionWorker* worker1 = new CommisionWorker("Bob", 22, 100, 10, 50);

    employees.push_back(boss1);
    employees.push_back(worker1);

    double totalPayments = 0.0;

    for (Employee* e : employees) {
        e->calculateSalary();  // No es estrictamente necesario, pero mantiene claridad
        cout << e->printSalary() << endl;
        totalPayments += e->calculateSalary();
    }

    cout << "Total payments to all employees: $" << totalPayments << endl;

    for (Employee* e : employees) {
        delete e;
    }

    return 0;
}
