#pragma once
#include "FlatShape.h"

/*
@brief klasa ktora jest kontenerem na figury
*/
class FSContainer{
  public:
    /*
    @brief operator +=, dodaje kolejne figury do wektora (kontenera)
    */  
    FSContainer& operator+=(FlatShape* s);
    /*
    @brief funkcja ktora zwraca rozmiar kontenera
    */  
    int get_size()const{return _c.size();}
    /*
    @brief funkcja zwraca figure z kontera 
    */    
    FlatShape* s_by_i(int i) const {return _c[i];}
  private:
    std::vector<FlatShape*> _c;
};

/*
@brief operator << który wypisuje kontener na strumien i zwraca ten strumien 
*/  
std::ostream& operator<<(std::ostream& os, const FSContainer &c);