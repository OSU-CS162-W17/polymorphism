#include <iostream>
#include <cstdlib>

#include "universityperson.hpp"
#include "employee.hpp"
#include "instructor.hpp"
#include "shape.hpp"


Employee* random_employee(int n) {
  if (rand() % 2) {
    return new Employee("Some Employee", 933000000 + n, "Employee", 10.0 * n);
  } else {
    return new Instructor("Some Instructor", 933001000 + n, "Instructor",
      10000.0 * n, 9);
  }
}


int main() {
  Employee employee("Darth Vader", 933654321, "Director of HR", 31.5);
  std::cout << "employee: " << employee.get_name() << "\t" << employee.get_id()
    << std::endl;
  std::cout << "\ttitle: " << employee.get_title() << std::endl;
  std::cout << "\tmonthly pay: " << employee.get_monthly_pay(160) << std::endl;
  std::cout << std::endl;

  Instructor instructor("Princess Leia", 933111111, "CS Instructor", 1000000, 9);
  std::cout << "instructor: " << instructor.get_name() << "\t" << instructor.get_id()
    << std::endl;
  std::cout << "\ttitle: " << instructor.get_title() << std::endl;
  std::cout << "\tmonthly pay: " << instructor.get_monthly_pay(160) << std::endl;
  std::cout << std::endl;

  // instructor = employee;
  employee = instructor;
  std::cout << "employee (after reassignment): " << employee.get_name() << "\t" << employee.get_id()
    << std::endl;
  std::cout << "\ttitle: " << employee.get_title() << std::endl;
  std::cout << "\tmonthly pay: " << employee.get_monthly_pay(160) << std::endl;
  std::cout << std::endl;

  Employee* eptr = &instructor;
  // Employee* eptr = &employee;
  std::cout << "eptr: " << eptr->get_name() << "\t" << eptr->get_id()
    << std::endl;
  std::cout << "\ttitle: " << eptr->get_title() << std::endl;
  std::cout << "\tmonthly pay: " << eptr->get_monthly_pay(160) << std::endl;
  std::cout << std::endl;

  Employee& eref = instructor;
  std::cout << "eref: " << eref.get_name() << "\t" << eref.get_id()
    << std::endl;
  std::cout << "\ttitle: " << eref.get_title() << std::endl;
  std::cout << "\tmonthly pay: " << eref.get_monthly_pay(160) << std::endl;
  std::cout << std::endl;

  Employee* employees[10];
  for (int i = 0; i < 10; i++) {
    employees[i] = random_employee(i);
  }

  for (int i = 0; i < 10; i++) {
    std::cout << employees[i]->get_name() << "\t" << employees[i]->get_title() << "\t" << employees[i]->get_monthly_pay(160)
      << std::endl;
    delete employees[i];
  }
}
