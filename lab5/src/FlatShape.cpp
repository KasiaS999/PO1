#include "FlatShape.h"


FlatShape :: FlatShape(std::string n):_n(n){
  std::cout<<"Jestem nowa figura "<<n<<std::endl;
}
FlatShape& FlatShape :: dodajW(const Vertex v){
  _s.push_back(v);
  return *this;
}
FlatShape& FlatShape :: operator+=(const Vertex v){
  _s.push_back(v);
  return *this;
}
bool FlatShape :: operator==(const FlatShape s){
  if (_s.size() != s._s.size()) return false;
  for(int i=0; i<_s.size(); i++){
    if(_s[i].x() != s._s[i].x() || _s[i].y() != s._s[i].y()) return false;
  }
  return true;
}


std::ostream& operator<<(std::ostream& os, const FlatShape &s){
  os<<"Figura: "<<s.nazwa()<<"\n";
  for(int i=0; i<s.get_size(); i++){
    os<<s.v_by_i(i);
  }
  return os<<"\n";
}