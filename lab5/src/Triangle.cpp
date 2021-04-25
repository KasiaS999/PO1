#include "Triangle.h"
#include <math.h>

Triangle :: Triangle(std::string n):FlatShape(n){
  std::cout<<"Mowiac scisle, jestem trojkatem."<<std::endl;
}
double Triangle :: pole() const{

  double a = sqrt((_s[0].x()-_s[1].x())*(_s[0].x()-_s[1].x()) + (_s[0].y()-_s[1].y())*(_s[0].y()-_s[1].y()));

  double b = sqrt((_s[1].x()-_s[2].x())*(_s[1].x()-_s[2].x()) + (_s[1].y()-_s[2].y())*(_s[1].y()-_s[2].y()));
  
  return (a*b)/2;
}