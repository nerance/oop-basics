#include "Workman.h"

void Workman::show() {
    if(get_pos() == headOfSector) {
        std::cout << "Head of Sector: " << get_name() << " "
                  << get_surname() << std::endl;
        //if(surname) delete[](this->surname);
        //std::cout << "Date of sector creation: " << date0 << std::endl;       
    }
    //if(surname) delete[](this->surname);
    if(get_pos() != headOfSector) {
	    std::cout << "Workman:\n";
	    std::cout << "    Person:\n";
		std::cout << "      name: " << get_name() << std::endl;
		std::cout << "      surname: " << get_surname() << std::endl;
		//if(surname) delete[](this->surname);
    	std::cout << "      position: " << get_posName() << std::endl;
	}
	if(currency != "")
    	std::cout << "      currency: " << get_curr() << std::endl;
    if(day != 0)
    	std::cout << "      day: " << get_day() << std::endl;
    if(month != 0)
    	std::cout << "      month: " << get_month() << std::endl;
    if(year != 0)
    	std::cout << "      year: " << get_year() << std::endl;
    //if(surname) delete[](this->surname);
}

Workman::Workman() {}

Workman::Workman(Person& person, const Position& position, const Date &date):
Person(person.get_surname(), person.get_name(), person.get_day(), person.get_month(), person.get_year()),
Position(position.get_pos(), position.get_curr())  {
	date0 = date;
}