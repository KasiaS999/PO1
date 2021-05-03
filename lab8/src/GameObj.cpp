#include "GameObj.h"

////////////////GameObj///////////////////////////////////////////////////////////
std::ostream& operator<<(std::ostream& os, const GameObj& g){
  g.print(os);
  return os;
}

GameObj :: GameObj(std::string id):_id(id) {}

GameObj :: ~GameObj(){}

std::string GameObj :: id() const{
  return _id;
}
////////////////HP///////////////////////////////////////////////////////////////
HP :: HP(int hp):_hp(hp){}
int HP :: get_hp() const{
  return _hp;
}

////////////////Character////////////////////////////////////////////////////////

Character :: Character(HP hp, std::string name, std::string id):GameObj(id), _hp(hp), _name(name){}

int Character :: hp() const{
  return _hp.get_hp();
 
}

void Character :: print(std::ostream& os) const{
  os<<_name<<", ma: ["<<hp()<<" HP]";
}

////////////////Player////////////////////////////////////////////////////////////////

Player :: Player(HP hp, std::string name, std::string id):GameObj(id), Character(hp, name, id){}
void  Player :: print(std::ostream& os) const{
  os<<"Player "<<static_cast<Character>(*this);
}
////////////////Hurting////////////////////////////////////////////////////////////////

Hurting :: Hurting(HP hrt, std::string id):GameObj(id), _hrt(hrt){}

int Hurting :: hp() const{
  return _hrt.get_hp();
}

void Hurting :: print(std::ostream& os) const{
  os<<"Jego uderzenie odbiera: ["<<hp()<<" HP]";
}

////////////////Bomb//////////////////////////////////////////////////////////////////

Bomb :: Bomb(HP hrt, std::string id):GameObj(id), Hurting(hrt, id){}

////////////////Boss//////////////////////////////////////////////////////////////////

Boss :: Boss(HP hp, std::string name, HP hrt, std::string id):GameObj(id), Hurting(hrt, id), Character(hp, name, id){}

void  Boss :: print(std::ostream& os) const{
  os<<"Bad guy: "<<static_cast<Character>(*this)<<"\n";
  os<<static_cast<Hurting>(*this);
}