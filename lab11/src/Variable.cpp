#include "Variable.h"

ArrayOfVariables :: ArrayOfVariables(int n):_n(n){}

IVariable :: IVariable(std::string name):_name(name){}
IVariable :: ~IVariable(){}

ArrayOfVariables :: ~ArrayOfVariables(){
  for(IVariable *v : _array){
    delete v;
  } 
}

void ArrayOfVariables :: Print() const{
  for(IVariable *v : _array){
    v->Print();
  }
}
