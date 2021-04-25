#pragma once 
#include "Primitive.h"

/*
*@brief klasa reprezentująca dodawanie
*/
class Sum: public Primitive{
  public:
    /*
    *@brief konstruktor
    */
    Sum( Primitive& A,  Primitive& B);
    /*
    *@brief funkcja wypisująca na ekran wyrażenie (A+B)
    */
    void print() const override;
    /*
    *@brief funkcja która zwraca wartość wyrażenie (A+B)
    *@return _A.v()+_B.v()
    */
    float v() const override;
  private:
    /*
    *@brief pierwszy argument sumy
    */
    Primitive& _A;
    /*
    *@brief drugi argument sumy 
    */
    Primitive& _B; 
};