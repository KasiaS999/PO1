#include "File.h"

void File :: print(std::ostream& os, int i) const{
  System::print(os,i);
  os<<" (FILE)\n";
}
File :: File(std::string n):System(n){}
