#include "Product.h"

Product :: Product( Primitive& A,  Primitive& B):_A(A), _B(B){}

void Product ::print() const{
  std::cout<<"(";
  _A.print();
  std::cout<<"*";
  _B.print();
  std::cout<<")";
}

float Product ::v() const{
  return _A.v()*_B.v();
}