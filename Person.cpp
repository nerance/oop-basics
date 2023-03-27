#include <cstring>
#include <utility>
#include "Person.h"

// Methods of set and get
std::string Person::get_name() const { return name; }
void Person::set_name(std::string name) { this->name = std::move(name); }
char *Person::get_surname() const { return surname; }
void Person::set_surname(char *surname) {
    //if(this->surname) delete[](this->surname);
    this->surname = surname;
}
//------------------------------------------------------------------------

void Person::show() { std::cout << "Person\n"; }

Person::Person(const char *surname, std::string name) : name(std::move(name)) {
    this->surname = new char[strlen(surname)];
    strcpy(this->surname, surname);
}

Person::Person() {
}

Person::Person(const Person& obj) : name(obj.name) {
    if(this->surname) delete[](this->surname);
    this->surname = new char[strlen(obj.surname)];
    strcpy(this->surname, obj.surname);
}

Person::Person(const char *surname, std::string name, int day, int month, int year) : Date(day, month, year),
                                                          name(std::move(name)) {
    this->surname = new char[strlen(surname)];
    strcpy(this->surname, surname);
}


void Person::set_date(int d, int m, int y) {
    set_day(d);
    set_month(m);
    set_year(y);
}

Person::~Person() { /*if(this->surname) delete[](this->surname);*/ }

/*std::ostream &operator<<(std::ostream& out, const Person& obj) {
    out << obj.surname << " " << obj.name << " (" << obj.day
    << "/" << obj.month << "/" << obj.year << ")";
    return out;
}*/
//-----------------------------------------------------------------