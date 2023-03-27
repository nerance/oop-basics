#include "Position.h"

const char* POSITION_NAMES [COUNT_POSITION] = {
	"headOfSector",
	"leadingResearcher",
	"seniorResearchFellow",
	"juniorResearchFellow",
	"seniorLaboratoryAssistant",
	"laboratoryAssistant"
};


// Methods of set and get
std::string Position::get_curr() const { return currency; }
void Position::set_curr(std::string currency) { this->currency = std::move(currency); }
const char* Position::get_posName() const { return POSITION_NAMES[position]; }
//void Position::set_posName(char *posName) { this->posName = posName; }
void Position::set_pos(POSITION pos) { position = pos; }
/*POSITION get_pos() const { return position; }*/ // in 5Position.h
//------------------------------------------------------------------------

void Position::show() {
	std::cout << "position\n";
}

Position::Position() {
	position = leadingResearcher;
	currency = "";
	poss = 0;
}

Position::Position(POSITION posType, std::string curr) {
    position = posType;
    currency = curr;
    poss = 0;
}

Position::~Position() {}

/*std::ostream &operator<<(std::ostream& out, const Position& obj) {
    out << obj.get_posName() << " " << obj.currency;
    return out;
}*/