#pragma once
#include "System.h"
#include <vector>
/*
*@brief klasa reprezentująca katalog, nie mozna po niej dziedziczyc bo 'final'
*/
class Dir final: public System{
  public:
    /*
    *@brief konstruktor
    */
    Dir(std::string n);
    /*
    *@brief destruktor
    */ 
    ~Dir();
    /*
    *@brief funkcja wypisujaca katalog
    */ 
    void print(std::ostream& os, int i = 0) const override;
    /*
    *@brief operator += dodajacy do wektora(System) katalog lub plik
    */ 
    void operator+=(System *s);
    /*
    *@brief funkcja dodajaca do wektora(obiektów typu System*) katalog lub plik
    */ 
    void add(System *s);
    /*
    *@brief funkcja która zwraca obiekt typu Dir* o zadanej nazwie 
    */ 
    Dir* findDir(std::string n);
    /*
    *@brief funkcja która zwraca obiekt typu System* o zadanej nazwie 
    */ 
    System* get(std::string n);
    
  private:
    /*
    *@brief wektor obiektów typu System*
    */ 
    std::vector<System*> _d;
};