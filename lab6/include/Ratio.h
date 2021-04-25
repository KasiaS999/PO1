#pragma once 
#include "Primitive.h"

/*
*@brief klasa reprezentujaca funkcje dzielenia
*/
class Ratio: public Primitive{
  public:
    /*
    *@brief konstruktor
    */
    Ratio( Primitive& A,  Primitive& B);
    /*
    *@brief funkcja wypisująca wyrażenie na ekran (A/B)
    */  
    void print() const override;
    /*
    *@brief funkcja zwracająca wartość wyrażenia (A/B)
    *@return _A.v()/_B.v()
    */  
    float v() const override;
  private:
    /*
    *@brief pierwszy arument dzielenia
    */  
    Primitive& _A;
    /*
    *@brief drugi argument dzielenia 
    */  
    Primitive& _B; 
};