#include "ReverseText.h"

  

ReverseText :: ReverseText():_prev(NULL), _size(0){}

ReverseText :: ReverseText(const char *text):_prev(NULL){
  _size = strlen(text);
  _text = new char[_size+1];
  strcpy(_text, text);
}

ReverseText :: ReverseText(ReverseText && t){
  _size = t._size;
  _text = t._text;
  _prev = t._prev;
  t._size =0;
  t._text=NULL;
  t._prev = NULL;
}

ReverseText :: ~ReverseText(){
  delete [] _text;
  _size = 0;
  _prev = NULL;
  _text = NULL;
}

int ReverseText :: size() const{
  const ReverseText *temp = this;
  int size = 0;
  while(temp){
    size+=temp->_size;
    temp=temp->_prev;
  }
  return size;
}
char* ReverseText :: str() const{
  
  return _text;
}
int ReverseText :: fragments() const{
  int f = 0;
  const ReverseText *temp = this;
  while(temp){
    f+=1;
    temp=temp->_prev;
  }
  return f;
}
const ReverseText& ReverseText :: fragment(int n) const{
  const ReverseText *temp = this;
  int f = fragments();
  for(int i=0; i<f-n-1; i++){
    temp=temp->_prev;
  }
  return *temp;
}
void ReverseText :: operator-=(const char *text){
  ReverseText *t = new ReverseText(text);
  ReverseText *temp = this;
  while(temp->_prev){
    temp = temp->_prev;
  }
  temp->_prev = t;
}
void ReverseText :: operator-=(ReverseText && t){
  _prev = &t;

}
void ReverseText :: operator=(ReverseText && t){
  _size = t._size;
  _text = t._text;
  _prev = t._prev;
  t._size =0;
  t._text=NULL;
  t._prev = NULL;
}

std::ostream &operator<<(std::ostream &os, const ReverseText &t){
  if(t.size()>0){
    int f = t.fragments();
    for(int i=0; i<f; i++){
      os<<t.fragment(i).str();
    }
  }
  return os;
}