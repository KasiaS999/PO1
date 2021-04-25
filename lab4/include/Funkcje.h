#pragma once 
#include <cmath>
#include <functional>
/*
*@brief klasa Sinus, zwracajaca wartosc funkcji sin(ax+b), 
*/
class Sinus{
  public:
    /*
    *@brief konstruktor dwuargumentowy
    *@param a
    *@param b
    */
    Sinus(double a, double b);
    /*
    *@brief operator (), zwracajacy wartosc funkcji sin(ax+b)
    *@param x - wartosc przyjmowana przez funkcje
    *@return sin(_a*x+_b)
    */
    double operator()(double x) const;
  private:
    double _a;
    double _b;
};

/*
*@brief klasa PierwiastekKwadratowy, zwracajaca sqrt(x)
*/
class PierwiastekKwadratowy{
  public:
    /*
    *@brief operator (), zwracajacy wartosc funkcji sqrt(x)
    *@param x - wartosc przyjmowana przez funkcje
    *@return sqrt(x)
    */
    double operator()(double x) const;
};

/*
*@brief klasa Liniowa, zwracajaca wartosc funkcji liniowej ax+b
*/
class Liniowa{
  public:
    /*
    *@brief konstruktor dwuargumentowy
    *@param a
    *@param b
    */
    Liniowa(double a, double b);
    /*
    *@brief operator (), zwracajacy wartosc funkcji liniowej
    *@param x - wartosc przyjmowana przez funkcje
    *@return _a*x+_b
    */
    double operator()(double x) const;
  private:
    double _a; 
    double _b;
};