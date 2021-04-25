#include "Ratio.h"

Ratio :: Ratio( Primitive& A,  Primitive& B):_A(A), _B(B){}

void Ratio ::print() const{
    std::cout<<"(";
  _A.print();
  std::cout<<"/";
  _B.print();
  std::cout<<")";
}

float Ratio ::v() const{
  return _A.v()/_B.v();
}