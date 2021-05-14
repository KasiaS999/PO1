#pragma once 
#include "Product.h"
/*
@brief klasa suma, ktora posiada wartosc sumy wektora
*/
class Sum{
  public:
    /*
    @brief konstruktor
    */    
    Sum(double suma);
    /*
    @brief zwraca wartosc _suma
    */        
    double value() const;
    /*
    @brief dodaje do wartości _suma wartość x 
    */        
    void operator()(double x);
  private:
    /*
    @brief wartosc sumy
    */      
    double _suma;
};
/*
@brief funkcja tworzaca obiekt klasy Sum, na podstawie obiektu Product, dodając wartości które są w wektorze p1
*/    
Sum sumData(Product p1);