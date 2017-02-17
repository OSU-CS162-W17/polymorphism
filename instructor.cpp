#include <iostream>
#include "instructor.hpp"

Instructor::Instructor(std::string name, int id, std::string title, float pay_rate, int appt_length)
  : Employee(name, id, title, pay_rate), appt_length(appt_length) {
  }

Instructor::~Instructor() {
  std::cout << "In Instructor's destructor" << std::endl;
}

float Instructor::get_monthly_pay(float hours_worked) {
  return this->get_pay_rate() / this->appt_length;
}

std::string Instructor::get_title() {
  return Employee::get_title() + "*";
}
