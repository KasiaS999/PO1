#pragma once
#include <cmath>
#include <iostream>

/*
*@brief Klasa reprezentująca punkt, posiada współrzędne punktu: (_x, _y), oraz odległość punktu od środka układu: _d
*/
class FlatPoint{
  public:
    /*
    *@brief konstruktor z dwoma parametrami
    */  
    FlatPoint(int x, int y);
    /*
    *@brief operator mniejszości, porównuje punkty na podstawie odległości od środka układu współrzędnych
    *@return zwraca prawdę jeśli odległość punktu(_d) jest mniejsza od odległości punktu (p1._d) p1
    */      
    bool operator<(const FlatPoint& p1) const;
    /*
    *@brief funkcja która wypisuje na ekran informacje o punkcie 
    */      
    void Print() const;
    /*
    *@brief zwraca pierwszą współrzędną punktu (_x)
    */      
    int x() const;
    /*
    *@brief zwraca drugą współrzędną punktu (_y)
    */      
    int y() const;
    /*
    *@brief zwraca odległość punktu od środka układu współrzędnych (_d)
    */      
    double d() const;
    /*
    *@brief funkcja statyczna, która wypisuje na ekran współrzędną y punktu p 
    */      
    static void FunctionPrintY(const FlatPoint& p); 
    /*
    *@brief funkcja statyczna, która wypisuje na ekran informacje o punkcie p 
    */      
    static void PrintPoint(const FlatPoint& p);
  private:
    /*
    *@brief pierwsza współrzędna punku 
    */  
    int _x;
    /*
    *@brief druga współrzędna punktu 
    */      
    int _y;
    /*
    *@brief odległość punktu od środka układu
    */      
    double _d;
};

/*
*@brief klasa-funktor która porównuje punkty p1 i p2 na podstawie współrzędnej x
*/
class OrderAscX{
  public:
    /*
    *@brief zwraca prawdę jesli p1._x < p2._x 
    */
    bool operator()(const FlatPoint& p1, const FlatPoint& p2) const;
};
/*
*@brief klasa-funktor która porównuje punkty p1 i p2 na podstawie współrzędnej y
*/
class OrderDescY{
  public:
    /*
    *@brief zwraca prawdę jesli p1._y > p2._y 
    */
    bool operator()(const FlatPoint& p1, const FlatPoint& p2) const;
};
/*
*@brief funkcja która sprawdza która z większych współrzędnych punktu p1 i p2 jest mniejsza. Zwraca prawdę jeśli większa współrzędna p1 jest mniejsza od większej współrzędnej p2
*/
bool MaxDistanceAsc(const FlatPoint& p1, const FlatPoint& p2);
/*
*@brief  wypisuje na ekran współrzędną x punktu p 
*/
void FunctionPrintX(const FlatPoint& p);