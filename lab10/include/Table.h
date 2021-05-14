#pragma once
#include "Product.h"
/*
@brief klasa Table ktora reprezentuje tablice danych
*/    
class Table{
  public:
    /*
    @brief operator += dodajacy do wektora _tablica kolejne warotsci (Product)
    */      
    void operator+=(Product p);
    /*
    @brief wartość która mów o tym ile ma kolumn, wiersz z najmniejsza liczba kolumn 
    */
    int minRow=100;
    /*
    @brief wypisuje na wyjscie _tablica  
    */
    void print() const;
    /*
    @brief sortuje wiersze w tablicy po wartosciach w pewnej kolumnie (kolumna)
    */
    Table sort(int kolumna);
    /*
    @brief sortuje wiersze po wartosciach zsumowanych w tych wierszach 
    */
    Table sortBy(std::function<bool (const Product& p1, const Product& p2)> f);
  private:
    /*
    @brief wektor obiektow typu Product
    */
    std::vector<Product> _tablica;
};