#include "Sum.h"

Sum :: Sum(double suma): _suma(suma){}

double Sum :: value() const{
  return _suma;
}

void Sum :: operator()(double x){
  _suma+=x;
}

Sum sumData(Product p1){
  double suma = 0;
  std::for_each(p1.produkt().begin(), p1.produkt().end(), [&suma](double x){suma+=x;});
  return Sum(suma);
}