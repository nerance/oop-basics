#ifndef PRACT5_6_POSITION_H
#define PRACT5_6_POSITION_H

#include <iostream>

enum POSITION {
    headOfSector,
    leadingResearcher,
    seniorResearchFellow,
    juniorResearchFellow,
    seniorLaboratoryAssistant,
    laboratoryAssistant,
    COUNT_POSITION
};

extern const char* POSITION_NAMES [COUNT_POSITION];

// overload operator[] !
class Position {
protected:
	int poss; // num of positions
    POSITION position;
    std::string currency;
public:
    Position();
    //Position(const char*);
    Position(POSITION, std::string);
    //Position(const Position&);
    //Position(const char*, int, std::string);
    ~Position();
    virtual void show();
    void set_curr(std::string);
    void set_posName(char *posName);
    std::string get_curr() const;
    const char* get_posName() const; // Sector
    void set_pos(POSITION pos);
    POSITION get_pos() const { return position; }

    friend std::ostream& operator<<(std::ostream&, const Position&);
};

#endif //PRACT5_6_POSITION_H






/*
enum POSITION {
    headOfSector,
    leadingResearcher,
    seniorResearchFellow,
    juniorResearchFellow,
    seniorLaboratoryAssistant,
    laboratoryAssistant
};

POSITION position;
*/