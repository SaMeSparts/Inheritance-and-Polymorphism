This project shows how to use inheritance and polymorphism in C++. It has three types of employees:

1. Employee (base class)
2. Boss (gets a bonus)
3. Commission Worker (gets extra money for items sold)

Each class has:
- A constructor to set the values.
- A method to calculate the salary.
- A method to print the salary information.
- Getters and setters for all values.

We used:
- Inheritance: Boss and CommissionWorker inherit from Employee.
- Polymorphism: We use a vector of Employee pointers to call the correct method for each type.

In the main program:
- We create one Boss and one CommissionWorker.
- We save them in a vector of Employee pointers.
- We use a loop to call `calculateSalary` and `printSalary` for each.
- We also calculate the total money paid to all employees.

Design decisions:
- We use `virtual` methods in the base class so that each subclass can have its own version.
- We return salary info as a string to keep the output in `main.cpp`, as required.

Everything is organized in `.h` and `.cpp` files.
- All header files are in the `include` folder.
- All source code is in the `src` folder.

End of file.
