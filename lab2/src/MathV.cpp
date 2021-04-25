#include "MathV.h"
MathV:: MathV():_n(0){}
MathV :: MathV(int n ):_n(n){
  _t = new int[_n];
  for(int i=0; i<_n; i++) _t[i] =0;
}
MathV :: MathV(const MathV &v){
  _n = v._n;
  _t = new int[_n];
  for(int i=0; i<_n; i++) _t[i] = v._t[i];
}
MathV :: MathV(MathV &&v){
  _n = v._n;
  _t = new int[_n];
  for(int i=0; i<_n; i++){
    _t[i] = v._t[i];
    v._t[i] =0;
  } 
  v._n = 0;
  v._t = 0;
}
MathV :: ~MathV(){
  delete [] _t;
  _t = nullptr;
  _n=0;
}

int& MathV :: at(int n) const{
  return _t[n];
}
void MathV :: print(std::string s) const{
  std::cout<<s<<"[ ";
  for(int i=0; i<_n; i++){
    if(i>0) std::cout<<", ";
    std::cout<<_t[i];
  }
  std::cout<<" ]"<<std::endl;
}

double MathV:: dot(const MathV &v1,const MathV &v2){
 if(v1._n != v2._n){
    std::cout<<"Error, vectors of different dimensions!"<<std::endl;
    return 0;
  }
  else{
    double n = 0;
    for(int i=0; i<n; i++){
      n+=v2._t[i]*v1._t[i];
    }
  return sqrt(n);
  }
}

MathV :: operator double() const{
  return norm();
}


double MathV :: norm() const{
  double n = 0;
  for(int i=0; i<n; i++){
    n+=_t[i]*_t[i];
  }
  return n;
}
MathV MathV :: operator+=(const MathV &v){
  
  for (int i=0; i<_n; i++){
    _t[i]+= v._t[i];
  }
  return *this;
}

MathV MathV :: operator+=(const int a){
  for (int i=0; i<_n; i++){
    _t[i]+= a;
  }
  return *this;
}