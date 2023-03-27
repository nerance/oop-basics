#ifndef PRACT5_6_WORKMAN_H
#define PRACT5_6_WORKMAN_H


#include "Person.h"
#include "Position.h"

class Workman : public Person, public Position {
public:
	int size;
	Date *date;
	Date date0;
public:
	Workman();
	//Workman(const Position& position);
	Workman(const Person& person, const Position& position);
	Workman(Person& person, const Position& position, const Date &date);
    //Workman(const Person &obj1, const Position &obj2, const Date &obj3);
    //Workman(const char*, std::string);
    //Workman(const Workman&);
    //const char* get_posName(headOfSector);
    virtual void show();
    /*Workman& operator=(Workman s);*/
    virtual ~Workman() { /*delete date; */}
};

#endif //PRACT5_6_WORKMAN_H