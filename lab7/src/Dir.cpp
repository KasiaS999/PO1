#include "Dir.h"

Dir :: Dir(std::string n):System(n){}
Dir :: ~Dir(){
  std::cout<<"Deleting Dir: "<<n()<<std::endl;
  for(System* d : _d){
    std::cout<<"About to delete "<<d->n()<<std::endl;
    delete d;
  }
  _d.clear();
}
void Dir :: print(std::ostream& os, int i) const{
  System:: print(os,i );
  os<<" (DIR)\n";
  for(System *d : _d){
    d->print(os, i+1);
  }
}
void Dir :: operator+=(System *s){
  _d.push_back(s);
}
void Dir :: add(System *s){
  _d.push_back(s);
}
Dir* Dir :: findDir(std::string n){
  for(System* d: _d){
    Dir* d1 = dynamic_cast<Dir*> (d);
    if(d1->n() == n ) return d1;
    Dir *d2 = d1->findDir(n);
    if (d2 != NULL ) return d2;
  }
  return NULL;
}
System* Dir :: get(std::string n){
  for(System* d: _d){
    if (d->n() == n) return d;
  
    Dir* d1 = dynamic_cast<Dir*> (d);
    if(d1){
      System *d2 = d1->get(n);
      if(d2 != NULL) return d2;
    }
  }

  return NULL;
}