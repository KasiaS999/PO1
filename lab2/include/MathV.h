#pragma once 
#include <iostream>
#include <math.h>

class MathV{
  public:
  MathV();
  explicit MathV(int n = 0);
  MathV(const MathV &v);
  MathV(MathV &&v);
  ~MathV();
  
  int &at(int n) const;
  void print(std::string s) const;
  operator double() const;
  static double dot(const MathV &v1,const MathV &v2);
  double norm() const;
  MathV operator+=(const MathV &v);
  MathV operator+=(const int a);
  int get_n()const {return _n;}

  private:
    int *_t;
    int _n;
};