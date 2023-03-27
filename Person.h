#ifndef PRACT5_6_PERSON_H
#define PRACT5_6_PERSON_H

#include "Date.h"

class Person : public Date {
protected:
    int d, m, y;
    char* surname;
    std::string name;
public:
    Person();
    Person(const char*, std::string);
    Person(const Person&);
    Person(const char*, std::string, int, int, int); // surname name date
    ~Person();
    void set_date(int d, int m, int y);
    void set_name(std::string);
    virtual void show();
    std::string get_name() const;
    char *get_surname() const;
    void set_surname(char *surname);

    //friend std::ostream& operator<<(std::ostream&, const Person&);
};


#endif //PRACT5_6_PERSON_H