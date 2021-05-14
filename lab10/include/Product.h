#pragma once 
#include <string>
#include <vector>
#include <functional>
#include <iomanip>
#include <iostream>
#include <algorithm>

/*
@brief klasa reprezentująca produkt, który posiada nazwe oraz wetor danych(double)
*/
class Product{
  public:
    /*
    @brief konstruktor
    */
    Product(std::string name, std::vector<double> produkt);   
    /*
    @brief wypisuje na wyjscie nazwe i zawartosc wektora
    */
    void print() const;
    /*
    @brief zwraca wektor z danymi
    */
    const std::vector<double>& produkt() const;
    
  private:
    /*
    @brief nazwa
    */
    std::string _name;
    /*
    @brief wektor
    */
    std::vector<double> _produkt;
};