#include "Sum.h"

Sum :: Sum( Primitive& A,  Primitive& B):_A(A), _B(B){}

void Sum ::print() const {
  std::cout<<"(";
  _A.print();
  std::cout<<"+";
  _B.print();
  std::cout<<")";
}

float Sum ::v() const {
  return _A.v()+_B.v();
}