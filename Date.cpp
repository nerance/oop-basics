#include "Date.h"
#include <ctime>

extern const char* POSITION_NAMES;

// methods of set and get
void Date::set_day(int day) { this->year = day; }
void Date::set_month(int month) { this->year = month; }
void Date::set_year(int year) { this->year = year; }

int Date::get_day() { return this->day; }
int Date::get_month() { return this->month; }
int Date::get_year() { return this->year; }
//-------------------------------

void Date::show() {
	std::cout << "Date\n";
}

// default constructor
Date::Date() {
    std::time_t t = time(nullptr);
    std::tm* now = localtime(&t);
    this->day = now->tm_mday;
    this->month = now->tm_mon+1;
    this->year = now->tm_year + 1900; // from 1900
}

// initialize constructor
Date::Date(int day, int month, int year) : day(day), month(month), year(year) {}

// copy constructor
Date::Date(const Date& obj) : day(obj.day), month(obj.month), year(obj.year) {}

// destructor
Date::~Date() = default;

// overload for "dd/mm/yy"
std::ostream& operator <<(std::ostream& out, const Date& obj) {
    out << obj.day << "/" << obj.month << "/" << obj.year;
    return out;
}