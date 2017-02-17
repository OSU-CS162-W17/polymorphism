#include <iostream>
#include "employee.hpp"

Employee::Employee(std::string name, int id, std::string title, float pay_rate = 0)
  : UniversityPerson(name, id), title(title), pay_rate(pay_rate) {
    this->address = "1148 Kelley";
  }

Employee::~Employee() {
  std::cout << "In Employee's destructor" << std::endl;
}

std::string Employee::get_title() {
  return this->title;
}


float Employee::get_pay_rate() {
  return this->pay_rate;
}


float Employee::get_monthly_pay(float hours_worked) {
  return hours_worked * this->pay_rate;
}
