#pragma once
#include <iostream>

/*
*@brief klasa Primitive opisująca liczbę
*/
class Primitive{
  public:
    /*
    *@brief konstruktor
    */
    Primitive(float v = 0);
    /*
    *@brief destruktor wirtualny
    */
    virtual ~Primitive();
    /*
    *@brief funkcja wypisująca na ekran  wyrazenie oraz otrzymana wartość tego wyrazenia 
    */
    void PrintWithValue() const;
    /*
    *@brief funkcja ustawiająca wartość liczby
    *@param v (_v = v)
    */
    void Set(float v);
    /*
    *@brief funkcja wirtualna wypisująca wyrażenie na ekran
    */
    virtual void print() const;
    /*
    *@brief funkcja wirtualna zwracająca wartość danego wyrażenia
    *@return _v
    */
    virtual float v() const;
  private:
    /*
    *@brief wartość liczby
    */
    float _v;


};