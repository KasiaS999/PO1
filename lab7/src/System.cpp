#include "System.h"


std::ostream& operator<<(std::ostream& os, const System &s){
  s.print(os);
  return os;
}

System :: System(std::string n):_n(n){}
System :: ~System(){}
void System :: print(std::ostream& os, int i)const{
  for(int j = 0; j<i; j++){
    os<<"  ";
  }
  os<<_n;
}

std::string System ::n() const{
  return _n;
}