#include "universityperson.hpp"

#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

class Employee : public UniversityPerson {
private:
  std::string title;
  float pay_rate;
public:
  Employee(std::string name, int id, std::string title, float pay_rate);
  virtual ~Employee();
  virtual std::string get_title();
  float get_pay_rate();
  virtual float get_monthly_pay(float hours_worked);
};

#endif
