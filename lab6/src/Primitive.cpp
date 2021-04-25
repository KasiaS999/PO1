#include "Primitive.h"

Primitive :: Primitive(float v):_v(v){}

Primitive ::  ~Primitive(){}

void Primitive :: PrintWithValue() const{
  print();
  std::cout<<" = "<<v()<<std::endl;
}

void Primitive :: Set(float v){
  _v = v;
}

void Primitive :: print() const{
  std::cout<<_v;
}

float  Primitive ::v() const{ 
  return _v;
}