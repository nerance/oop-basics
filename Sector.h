#include "Workman.h"
#include <cstring>

class ListWork {
    int size;
    char* sectName;
    Workman* workmans;
    Date date0;
    //Workman workman0; //**
    //Position position0;
public:
    ListWork();
    ListWork(Workman& s);
    ListWork(const ListWork& L);
    ListWork(const char* sectName, const ListWork& obj2, const Date &obj3);
    ~ListWork() { 
        if(workmans) delete [] workmans;
        //if(sectName) delete[](this->sectName);
    }
    void add(Workman &s);
    void del(int i);
    virtual void show();
    //void show();
    Workman *get_workmans(int i) const;
    char *get_sectName() const;
    int get_size();
    Workman operator []( int i);
    ListWork& operator =(ListWork S);
};