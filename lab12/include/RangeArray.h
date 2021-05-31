#pragma once
#include "PairOfNumbers.h"

/*
*@brief  szablon klasy która tworzy tablice na podstawie pary liczb (PairOfNumbers)
*/
template <class T>
class RangeArray{
  public:
    /*
    *@brief konstruktor
    */  
    RangeArray(PairOfNumbers<int, T> p){
      _size = p.second - p.first;
      _array = new T[_size];
    }
    /*
    *@brief destruktor
    */  
    ~RangeArray(){
      delete [] _array;
    }
    /*
    *@brief konstruktor kopiujący
    */  
    RangeArray(const RangeArray& a){
      _size = a._size;
      _array = new T[_size];
      for (int i=0; i<_size; i++){
        _array[i] = a._array[i];
      }
    }
    /*
    *@brief zwraca rozmiar tablicy
    */  
    int Size(){
      return _size;
    }

    /*
    *@brief przeładowanie operatora [],  zwraca _array[i],dodatkowo obsluguje indeksowanie w taki sposób że wywołanie tab[-1] jest odwołaniem do ostaniego elementu tablicy, tab[-2] -do przeodstatniego itd.
    */  
    T& operator[](int i){
      if (i<0) i+=_size;
      return _array[i];
    }

    /*
    *@brief funkcja ktora dziala jak operator [], zwraca _array[i],dodatkowo obsluguje indeksowanie w taki sposób że wywołanie tab[-1] jest odwołaniem do ostaniego elementu tablicy, tab[-2] -do przeodstatniego itd.
    */  
    T& At(int i){
      if (i<0) i+=_size;
      return _array[i];
    }

  private:
    /*
    *@brief tablica wartosci
    */  
    T *_array;
    /*
    *@brief rozmiar tablicy
    */  
    int _size;
};