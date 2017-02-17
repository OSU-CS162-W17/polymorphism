#include "employee.hpp"

#ifndef INSTRUCTOR_HPP
#define INSTRUCTOR_HPP

class Instructor : public Employee {
private:
  int appt_length;
public:
  Instructor(std::string name, int id, std::string title, float pay_rate, int appt_length);
  ~Instructor();
  virtual std::string get_title();
  virtual float get_monthly_pay(float hours_worked);
};

#endif
