#pragma once 
#include "Primitive.h"

/*
*@brief klasa która reprezentuje mnożenie 
*/
class Product: public Primitive{
  public:
    /*
    *@brief konstruktor
    */
    Product( Primitive& A,  Primitive& B);
    /*
    *@brief funkcja która wypisuje na ekran wyrazenie (A * B)
    */
    void print() const override;
    /*
    *@brief funkcja która zwraca wartość wyrażenia 
    *@return _A.v()*_B.v()
    */
    float v() const override;
  private:
    /*
    *@brief pierwszy argument mnożenia
    */
    Primitive& _A;
    /*
    *@brief drugi argument mnożenia 
    */
    Primitive& _B; 
};