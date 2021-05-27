#pragma once
#include <vector>
#include <string>
#include <iostream>

class IVariable{
  public:
    IVariable(std::string name);
    virtual ~IVariable();
    virtual void Print() const = 0;
  protected:
    std::string _name;
};

template<class T>
class Variable : public IVariable{
  public:
    Variable(std::string name, T val);
    void Print() const override;
    void SetValue(T val){ _value =  val;}
  protected:
    T _value;
};

template<class T>
Variable<T> :: Variable(std::string name, T val):IVariable(name), _value(val){}

template<class T>
void Variable<T> :: Print() const{
  std::cout<<_name<<": "<<_value<<std::endl;
}

using VariableDouble = Variable<double>;
using VariableFloat = Variable<float>;
using VariableChar = Variable<char>;
using VariableInt = Variable<int>;
using VariableBool = Variable<bool>;

class ArrayOfVariables{
  public:
    ArrayOfVariables(int n);
   ~ArrayOfVariables();
    template<class T>
    Variable<T>* CreateAndAdd(std::string name, T val);
    void Print() const;
  private:
    int _n;
    std::vector<IVariable*> _array;
};

template<class T>
Variable<T>* ArrayOfVariables::CreateAndAdd(std::string name, T val){
  Variable<T> *var = new Variable<T>(name, val);
  _array.push_back(var);
  return var;
}

template<class T>
class VariableWithUnits : public Variable<T>{
  public:
    VariableWithUnits(std::string name, T val, std::string unit);
    void Print() const override; 
  private:
    std::string _unit;
};

template<class T>
VariableWithUnits<T> :: VariableWithUnits(std::string name, T val, std::string unit):Variable<T>(name, val), _unit(unit) {}

template<class T>
void VariableWithUnits<T> :: Print() const{
  std::cout<<this->_name<<": "<<this->_value<<" ["<<_unit<<"]"<<std::endl;
} 