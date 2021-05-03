#pragma once 
#include <string>
#include <sstream>

//klasa bazowa
class GameObj{
  public:
    //operator << pozwalajacy wyswietlic GameObj
    friend std::ostream& operator<<(std::ostream& os, const GameObj& g);
    //konstruktor
    GameObj(std::string id);
    //wirtualny destruktor
    virtual ~GameObj();
    //funckja zwracajaca id
    std::string id() const;
    //wirtualna funkcja wypisujaca 
    virtual void print(std::ostream& os) const = 0;
  protected:
    std::string _id;

};
//klasa reprezentująca HP - health points
class HP{
  public:
    //konstruktor
    HP(int hp);
    //zwraca wartosc hp
    int get_hp() const;
  private:
    int _hp;
};


//klasa która reprezentuje pewna funkcjonalność gry: postac w grze, dziedziczy po GameObj
class Character: public virtual GameObj{
  public:
    //konstruktor
    Character(HP hp, std::string name, std::string id);
    //zwraca wartosc hp
    int hp() const;
    //funkcja wypisujaca
    void print(std::ostream& os) const override;
  private:
    HP _hp;
    std::string _name;
};


//klasa która reprezentuje konkretnego gracza (postać) - dlatego dziedziczy po Character
class Player: public Character{
  public:
    //konstruktor
    Player(HP hp, std::string name, std::string id);
    //funkcja wypisujaca
    void print(std::ostream& os) const override;
};


//klasa która reprezentuje pewna funkcjonalność gry: zranienie gracza, dlatego dziedziczy po GameObj 
class Hurting: public virtual GameObj{
  public:
    //konstruktor
    Hurting(HP hrt, std::string id);
    //zwraca wartosc hp
    int hp() const;
    //funkcja wypisujaca
    void print(std::ostream& os) const override;
  private:
    HP _hrt;
};


//klasa Bomb reprezentuje funkcjonalnosc ktora rani gracza dlatego dziedziczy po Hurting 
class Bomb : public Hurting{
  public:
    //konstruktor
    Bomb(HP hrt, std::string id);
};

//klasa Boss reprezentuje postać która może ranić, dlatego reprezentuje po Character i po Hurting
class Boss: public Hurting, public Character{
  public:
    //konstruktor
    Boss(HP hp, std::string name, HP hrt, std::string id);
    //funkcja wypisujaca
    void print(std::ostream& os) const override;

};