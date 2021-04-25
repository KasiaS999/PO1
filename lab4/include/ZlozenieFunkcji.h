#pragma once
#include <vector>
#include <functional>
/*
*@brief klasa ZlozenieFunkcji pozwala na obliczenie wartości złożenia
*/
class ZlozenieFunkcji{
  public:
    /*
    *@brief konstruktor bezparametrowy, przypisuje do _f std::vector<std::function<double(double)>>(), do _r std::vector<double>();
    */
    ZlozenieFunkcji();
    /*
    *@brief funkcja insert, doklada do vektora _f, kolejne funkcje (funkcjonaly) f
    *@param f - funkcja double f(double)
    */
    void insert(const std::function<double(double)> f);
    /*
    *@brief funkcja wynik, zwracajaca wynik zlozenia od wartosci x
    *@param x 
    *@return fn(...(f2(f1(f0(x)))))
    */    
    double wynik(double x);
    /*
    *@brief operator [], umozliwiajacy dostep do czesci zlozenia, na podstawie indeksu,
    *@param i, indeks danej funkcji w zlozeniu
    *@return fi(...(f0(x))), np dla i=0 f0(x)
    */
    double operator[](unsigned i) const;

  private:
    /*
    * @brief wektor _f przechowujący kolejne funkcje zlozenia 
    */
    std::vector<std::function<double(double)>> _f;
    /*
    *@brief wektor _r przechowujacy wyniki, dla danej wartosci x, dla jakiegos zlozenia
    */
    std::vector<double> _r;
};