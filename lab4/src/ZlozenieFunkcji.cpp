#include "ZlozenieFunkcji.h"


ZlozenieFunkcji :: ZlozenieFunkcji(){
  _f = std::vector<std::function<double(double)>>();
  _r = std::vector<double>();
}
void ZlozenieFunkcji :: insert(const std::function<double(double)> f){
  _f.push_back(f);
}

double ZlozenieFunkcji :: wynik(double x){
  _r.clear();
  _r.push_back(_f[0](x));
  for(int i = 1; i< _f.size(); i++){
    _r.push_back(_f[i](_r[i-1]));
  }
  return _r[_f.size()-1];
}
double ZlozenieFunkcji :: operator[](unsigned i)const{
  return _r[i];
}