#ifndef PRACT5_6_DATE_H
#define PRACT5_6_DATE_H

#include <iostream>

class Date {
protected:
    int day;
    int month;
    int year;
public:
    Date();
    Date(int day, int month, int year);
    Date(const Date&);
    ~Date();

    void set_day(int);
    void set_month(int);
    void set_year(int);
    
    int get_day();
    int get_month();
    int get_year();

    virtual void show();

    friend std::ostream& operator <<(std::ostream&, const Date&);
};


#endif //PRACT5_6_DATE_H