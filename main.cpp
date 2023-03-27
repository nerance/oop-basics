#include <iostream>
#include "Date.h"
#include "Position.h"
#include "Person.h"
#include "Workman.h"
#include "Sector.h"

using std::cout;
using std::endl;

int main() {
	
    Date date1(3, 3, 1930); // sector creation
    //cout << date1 << endl;
    Position position1(headOfSector, "3000$");
    Position position2(leadingResearcher, "2500$");
    Position position3(seniorResearchFellow, "2000$");
    Position position4(seniorResearchFellow, "2000$");
    //cout << position1 << endl;
    Person person1("Kramer", "John", 21, 7, 1951);
    Person person2("Kramerus", "Josh", 24, 10, 1953);
    Person person3("Kram", "Jeffrey", 19, 9, 1939);
    Person person4("Kram", "Jeffrey", 19, 9, 1939);
    Workman workman1(person1, position1, date1); // example: position2
    Workman workman2(person2, position2, date1);
	Workman workman3(person3, position3, date1);
	Workman workman4(person1, position2, date1);
    //Workman workman1(person1);
    //cout << workman1 << endl;
    Workman s1; // default
    ListWork listWork;
    /*ListWork listWork;*/
    //listWork.add(s1);
    listWork.add(workman1);
    listWork.add(workman2);
    listWork.add(workman3);
    //listWork.del(0); // by index
    listWork.show();
    /*listWork.show();*/
    //ListWork l2(listWork); // copy
    //cout << "--------List l2----------\n";
    //l2.show();
    //cout << "-------------------------\n";
    // cout << "--------List Sector(listWork)----------\n";
    /*ListWork Sector("First sector", listWork, date1);
    Sector.show();*/
    cout << "---\nQuantity of objects = " << listWork.get_size() << endl;
    Date* date_ptr;
    date_ptr = &workman4;//&s1;
    date_ptr->show();
    date_ptr = &date1;
    date_ptr->show();
    date_ptr = &person4;
    date_ptr->show(); // workman4.show() or s1.show() the same but in runtime
    cout << "Date*----------\n";
    Position* position_ptr;
    position_ptr = &position4;
    position_ptr->show();
    position_ptr = &workman4;
    position_ptr->show();
    cout << "Position*--------\n";
    return 0;
}