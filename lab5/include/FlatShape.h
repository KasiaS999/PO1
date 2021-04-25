#pragma once
#include "Vertex.h"
#include <string>
#include <vector>
#include <iostream>
/*
@brief klasa rezprezentujaca figure, ktora jest zbiorem wierzcholkow
*/
class FlatShape{
  public:
    /*
    @brief konstruktor z 1 parametrem
    */
    FlatShape(std::string n);
    /*
    @brief funkcja ktora dodaje kolejny wierzcholek do wektora
    */
    FlatShape& dodajW(const Vertex v);
    /*
    @brief operator += , dodaje kolejny wierzcholek do wektora
    */
    FlatShape& operator+=(const Vertex v);
    /*
    @brief operator == , spawdza czy wektory sa takie same, zwraaca bool
    */  
    bool operator==(const FlatShape s);
    std::string nazwa() const{return _n;}
    int get_size()const{return _s.size();}
    Vertex v_by_i(int i) const {return _s[i];}

  protected:
    std::string _n;
    std::vector<Vertex> _s;
};
/*
@brief operator << który wypisuje figure na strumien i zwraca ten strumien 
*/  
std::ostream& operator<<(std::ostream& os, const FlatShape &s);