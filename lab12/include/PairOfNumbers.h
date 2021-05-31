#pragma once
#include <iostream>
/*
*@brief szablon klasy reprezentujący parę licz(różnego typu)
*/
template<class T, class C>
class PairOfNumbers{
  public: 
    //pierwsza liczba
    T& first;
    //druga liczba
    C& second;
    /*
    *@brief konstruktor przyjmujący dwie liczby
    */
    PairOfNumbers(T& f, C& s):first(f), second(s){}
    /*
    *@brief funkcja która zamienia wartości (first i second) miejscami, zwraca parę liczb
    */
    PairOfNumbers<C, T> Swapped() const{
      return PairOfNumbers<C, T>(second, first);
    }
    /*
    *@brief funkcja wypisujaca liczbe na ekran
    */
    void Print()const{
      std::cout<<"Print method: "<<first<<" "<<second<<std::endl;
    }
    /*
    *@brief funkcja która dodaje do obydwu liczb z pary wartość x
    */    
    void Add(int x){
      first+=x;
      second+=x;
    }
    /*
    *@brief funkcja która mnoży obie wartości pary przez x
    */
    void Scale(int x){
      first*=x;
      second*=x;
    }
    /*
    *@brief funkcja wypisuje informcje o tym ze obiekt nie jest const
    */
    void Info(){
      std::cout<<"This is NON-const pair of numbers"<<std::endl;
    }
    /*
    *@brief funckja wypisuje informacje o tym ze obiekt jest const 
    */
    void Info() const{
      std::cout<<"This is const pair of numbers"<<std::endl;
    }
};