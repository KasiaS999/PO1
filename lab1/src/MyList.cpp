#include "MyList.h"


MyList :: MyList(): _head(NULL), _tail(NULL), _n(0){
    std::cout<<"KONST: Domyślny"<<std::endl;
}
MyList :: MyList(int l): MyList(){
    for(int i=0; i<l; i++) add(i);
    std::cout<<"KONST: Jednoargumentowy"<<std::endl;
}
MyList :: MyList(const std::initializer_list <int> list): _head(NULL), _tail(NULL), _n(0){
    for(int i : list) add(i);
    std::cout<<"KONST: std::initializer_list"<<std::endl;
}
MyList :: MyList(const MyList &l){
    MyNode *temp = l._head;
    while(temp){
        add(temp->_val);
        temp=temp->_next;
    }
     std::cout<<"KONST: kopiujacy"<<std::endl;

}
MyList :: MyList(MyList &&l): _head(std::__exchange(l._head, nullptr)),_tail(std::__exchange(l._tail, nullptr)),_n(std::__exchange(l._n, 0))  {
    std::cout<<"KONST: przenoszacy"<<std::endl;

}
MyList :: MyList(int (fun)(MyNode*), int l){
    
     
    for(int i=0; i<l; i++)
    {
        add(fun(_tail));
       
    }
    std::cout<<"KONST: funkcja generujaca"<<std::endl;
}
MyList :: ~MyList(){
    std::cout<<"DESTRUKTOR (rozmiar = "<< size()<<")"<<std::endl;
    clear();

}
void MyList :: clear(){
    MyNode *temp = _head;
    while(temp){
        _head= _head->_next;
        delete temp;
        temp = _head;
    }
    _n =0;
    _head = NULL;
    _tail = NULL;
}
void MyList :: add(int val){
  MyNode *temp =  new MyNode(val);
  if(_head == NULL){
    _head = temp;
    _tail =  temp;
    _n++;
  }
  else{
    
    _tail->_next = temp;
    _tail = temp;
    _n++;
  }
   
}
bool MyList :: empty() const{
    if(_head) return false;
    return true;
}
void MyList :: print() const{
  MyNode *temp = _head;
  std::cout<<"[";
  if(temp){
    while(temp!=_tail){
      std::cout<<temp->_val<<", ";
      temp = temp->_next;
    }
     std::cout<<temp->_val;
  }
  std::cout<<"]"<<std::endl;
}
int MyList :: size() const{
    return _n;
}