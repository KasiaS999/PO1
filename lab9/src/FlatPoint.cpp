#include "FlatPoint.h"

FlatPoint :: FlatPoint(int x, int y):_x(x), _y(y), _d(sqrt(x*x+y*y)){}

bool FlatPoint :: operator<(const FlatPoint& p1) const{
  return _d<p1._d;
}

void FlatPoint :: Print() const{
  std::cout<<"Point coordinates ("<<_x<<", "<<_y<<") distance from origin: "<<_d<<std::endl;
}

int FlatPoint :: x() const{
  return _x;
}
int FlatPoint :: y() const{
  return _y;
}

double  FlatPoint :: d() const{
  return _d;
}

void FlatPoint :: FunctionPrintY(const FlatPoint& p){
  std::cout<<"Function print y="<<p.y()<<std::endl;
}

void FlatPoint :: PrintPoint(const FlatPoint& p){
  std::cout<<"Point coordinates ("<<p.x()<<", "<<p.y()<<") distance from origin: "<<p.d()<<std::endl;
}

bool OrderAscX :: operator()(const FlatPoint& p1, const FlatPoint& p2) const{
  return p1.x()<p2.x();
}

bool OrderDescY :: operator()(const FlatPoint& p1, const FlatPoint& p2) const{
  return p1.y()>p2.y();
}

bool MaxDistanceAsc(const FlatPoint& p1, const FlatPoint& p2){
  int max_p1 = p1.x()>p1.y() ? p1.x() : p1.y();
  int max_p2 = p2.x()>p2.y() ? p2.x() : p2.y();
  return max_p1 < max_p2;
}

void FunctionPrintX(const FlatPoint& p){
  std::cout<<"Function print x="<<p.x()<<std::endl;
}