#ifndef UNIVERSITYPERSON_HPP
#define UNIVERSITYPERSON_HPP

class UniversityPerson {
private:
  std::string name;
  int id;
protected:
  std::string address;
public:
  UniversityPerson();
  UniversityPerson(std::string name, int id);
  std::string get_name();
  int get_id();
};

#endif
