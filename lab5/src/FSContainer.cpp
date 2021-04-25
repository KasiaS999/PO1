#include "FSContainer.h"

FSContainer& FSContainer :: operator+=(FlatShape* s){
  _c.push_back(s);
  return *this;
}
std::ostream& operator<<(std::ostream& os, const FSContainer &c){
  os<<"W kontenerze znajduja sie: \n";
  for(int i=0; i<c.get_size(); i++){
    os<<*c.s_by_i(i);
  }
  return os;
}