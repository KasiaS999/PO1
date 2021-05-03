#pragma once
#include "System.h"
/*
*@brief klasa reprezentujaca plik
*/
class File : public System{
  public:
    /*
    *@brief funkcja wypisująca plik, w ładny sposób
    */
    void print(std::ostream& os, int i = 0) const override;
    /*
    *@brief konstruktor
    */
    File(std::string n);
};