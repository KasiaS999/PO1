#pragma once 
#include <string>
#include <sstream>
#include <iostream>
/*
*@brief klasa opisująca sytem plików
*/
class System{
  public:
    /*
    *@brief operator << (funkcja zaprzyjaźniona) wywołuje metode print dla danego obiektu
    */
    friend std::ostream& operator<<(std::ostream& os, const System &s);
    /*
    *@brief konstruktor z jednym parametrem
    */
    System(std::string n);
    /*
    *@brief wirtualny destruktor
    */
    virtual ~System();
    /*
    *@brief wirtualna funkcja print, wypisuje dany system katalogow i plikow w ladny sposob
    *@argument i informuje o tym ile spacji wypisac przed nazwa
    */
    virtual void print(std::ostream& os, int i = 0) const;
    /*
    *@brief funkcja zwracajaca nazwe 
    */
    std::string n() const;
  protected:
    /*
    *@brief nazwa
    */
    std::string _n;
};