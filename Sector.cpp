#include "Sector.h"

using namespace std;

// Methods of set and get
char *ListWork::get_sectName() const { return sectName; }
//Workman *ListWork::get_workmans(int i) const { /**/ }
//------------------------------------------------------------------------
ListWork::ListWork():workmans(nullptr) {
    size = 0;
    sectName = "default";
}

ListWork::ListWork(Workman& s) {
    add(s);
}

ListWork::ListWork(const ListWork& L) {
    size = L.size;
    if(size > 0) {
        workmans = new Workman[size];
        for (int i = 0; i < size; i++) {
            workmans[i] = L.workmans[i];
        }
    }
}

ListWork& ListWork::operator =(ListWork S) {
    if(this == &S) return *this;

    size = S.size;
    if(workmans != nullptr) {
        delete [] workmans;
        workmans = nullptr;
    }

    if(size > 0) {
        workmans = new Workman[size];
        for (int i = 0; i < size; i++) {
            workmans[i] = S.workmans[i];
        }
    }
    return *this;
}

Workman ListWork::operator[](int i) {
    if (i < 0 || i >= size) {
        cout << "*** Index out of list ***\n";
        exit(1);
    }
    return workmans[i];
}
// ss
void ListWork::add(Workman &s) {
    Workman* newList = new Workman[std::max(size, 0) + 1];
    if(workmans != nullptr) {
        for(int i = 0; i < size; ++i) {
            newList[i] = workmans[i];
        }
        delete [] workmans;
    }
    newList[size++] = s;
    workmans = newList;
}

void ListWork::show() {
    if(sectName != nullptr) {
        std::cout << "Sector: " << get_sectName() << std::endl;
        std::cout << "Date of sector creation: " << date0 << std::endl;
    }
    for (int i = 0; i < size; i++) {
        cout << "ListWork[" << i << "]:\n";
        workmans[i].show();
    }
}

void ListWork::del(int i) {
    if (i < 0 || i >= size) {
        cout << "\n*** ПОМИЛКА! ВИХІД ЗА МЕЖІ МАСИВУ! ***\n";
        exit(1);
    }

    Workman* newList = (size - 1) <= 0 ? nullptr : new Workman[size-1];
    if(newList) {
        for(int j = 0;j < i;++j) {
            newList[j] = workmans[j];
        }

        for(int j = i+1; j < size; j++) {
            newList[j-1] = workmans[j];
        }

        delete [] workmans;

        workmans = newList;
        size--;
    }
}

int ListWork::get_size() { return size; }

// Sector
/*ListWork::ListWork(char* sectName, const Workman &obj1, const ListWork& obj2, const Date& obj3):workmans(nullptr) {
    workman0 = obj1;
    this->sectName = new char[strlen(sectName)];
    strcpy(this->sectName, sectName);
    set_pos(obj2.get_pos()); // class Workman
    size = obj2.size;        // class Workman
    if(size > 0) {
        workmans = new Workman[size];
        for (int i = 0; i < size; i++) {
            workmans[i] = obj2.workmans[i];
        }
    }
    date0 = obj3;
}
*/
ListWork::ListWork(const char* sectName, const ListWork& obj2, const Date& obj3):workmans(nullptr) {
    //workman0 = obj1;
    this->sectName = new char[strlen(sectName)];
    strcpy(this->sectName, sectName);
    //set_pos(obj2.get_pos()); // class Workman
    size = obj2.size;        // class Workman
    if(size > 0) {
        workmans = new Workman[size];
        for (int i = 0; i < size; i++) {
            workmans[i] = obj2.workmans[i];
        }
    }
    date0 = obj3;
}