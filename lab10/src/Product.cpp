#include "Product.h"


Product :: Product(std::string name, std::vector<double> produkt):_name(name), _produkt(produkt){}

void Product :: print() const{
  std::cout<<_name<<":";
  std::for_each(_produkt.begin(), _produkt.end(), [](double x){std::cout<<std::setw(8)<<x;});
  std::cout<<std::endl;
}

const std::vector<double>& Product :: produkt() const{
  return _produkt;
}