#pragma once
#include "FlatShape.h"
/*
@brief klasa trojkat, figura ktora jest trojkatem 
*/
class Triangle:public FlatShape{
  public:
    /*
    @brief konstruktor z jednym parametrem
    */
    Triangle(std::string n);
     /*
    @brief funkcja ktora zwraca wartosc pola trojkata 
    */
    double pole() const;
};