#include "Table.h"

void Table::operator+=(Product p){
  _tablica.push_back(p);
  if(minRow > p.produkt().size()) minRow =  p.produkt().size();
}

void Table::print() const{
  std::for_each(_tablica.begin(), _tablica.end(), [](Product p){p.print();});
  std::cout<<std::endl;
}


Table Table::sort(int kolumna){
  if (kolumna>=minRow){
    std::cout<<"Indeks "<<kolumna<<" nieprawidlowy!"<<std::endl;
    
    return *this;
  }
  std::sort(_tablica.begin(), _tablica.end(), [kolumna](const Product& p1, const Product& p2){return p1.produkt()[kolumna]<p2.produkt()[kolumna];});
  return *this;
}

Table  Table::sortBy(std::function<bool (const Product& p1, const Product& p2)> f){
  std::sort(_tablica.begin(), _tablica.end(), f);
  return *this;
}