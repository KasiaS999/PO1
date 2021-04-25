
#include "Vertex.h"

Vertex :: Vertex(int x, int y):_x(x), _y(y){}


std::ostream& operator<<(std::ostream& os, const Vertex &v){
  return os<<" <"<<v.x()<<", "<<v.y()<<"> ";
}