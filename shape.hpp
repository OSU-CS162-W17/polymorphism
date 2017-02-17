#include <iostream>

#ifndef SHAPE_HPP
#define SHAPE_HPP

class Shape {
private:
  std::string name;
  std::string color;
public:
  Shape(std::string name, std::string color) : name(name), color(color) {}
  std::string get_name() { return this->name; }
  std::string get_color() { return this->color; }
  virtual float area() = 0;
};

#endif
