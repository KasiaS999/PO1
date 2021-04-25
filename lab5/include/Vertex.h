#pragma once
#include <sstream>

/*
@brief Klasa reprezentująca wierzcholek o calkowitych wspolrzednych 
*/
class Vertex{
  public:
    /*
    @brief konstruktor z dwoma paramatrami x i y
    */
    Vertex(int x, int y);
    /*
    @brief funkcja zwracajaca _x
    */    
    int x() const {return _x;}
    /*
    @brief funkcja zwracajaca _y
    */  
    int y() const {return _y;}
  private:
    int _x;
    int _y;

};
/*
@brief operator << który wypisuje wierzcholek na strumien i zwraca ten strumien 
*/  
std::ostream& operator<<(std::ostream& os, const Vertex &v);