#include <iostream>
#include <vector>
#include "employee.h"

int main() {
    std::vector<Employee> employees = {
        {"Ivanov", 1950, "Manager", 1500.0, "Higher"},
        {"Petrov", 1980, "Engineer", 2000.0, "Higher"},
        {"Sidorov", 1945, "Technician", 1200.0, "Secondary"},
        {"Smirnov", 1960, "Accountant", 1800.0, "Higher"},
        {"Kuznetsov", 1975, "Programmer", 2500.0, "Higher"}
    };

    int count = 0;
    std::cout << "Employees older than 60 years:\n";
    for (const auto& emp : employees) {
        if (2024 - emp.birthYear > 60) {
            std::cout << "Surname: " << emp.surname
                      << ", Year of Birth: " << emp.birthYear
                      << ", Position: " << emp.position
                      << ", Salary: " << emp.salary
                      << ", Education: " << emp.education << '\n';
            count++;
        }
    }
    std::cout << "Total employees older than 60: " << count << '\n';

    return 0;
}
