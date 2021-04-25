#pragma once 
#include <iostream>
#include <string.h>

class ReverseText{
   /*
    @brief funkcja zaprzujaźniona, operator <<, wypisujący na wyście listę
  */
  friend std::ostream &operator<<(std::ostream &os, const ReverseText &t);
  public:
    /*
    @brief konstruktor bezparametrowy, ustawia _size = 0, wskaźnik _prev na NULL.
    */
    ReverseText();

    /*
    @brief konstruktor z jednym parametrem, który jest tablica char, do _text =  const char*, _size rozmiar parametru, _prev = NULL
    */
    ReverseText(const char *text);
    /*
    @brief konstruktor przenoszący
    */
    ReverseText(ReverseText && t);
    /*
    @brief destruktor
    */
    ~ReverseText();
    /*
    @brief funkcja size oblicza ilość znaków w całym napisie
    @return zwraca tę ilość (int)
    */
    int size() const;
    /*
    @brief funkcja str, zwraca _text w danym fragmencie
    @return zwraca _text w danym fragmencie,(char*)
    */
    char* str() const;
    /*
    @brief oblicza ilość fragmentów
    @return zwraca długość listy, ilość fragmentów (int)
    */
    int fragments() const;
    /*
    @param int n - który element listy ma byc zwrócony
    @brief funkcja służąca do znalezienia danego fragmentu listy
    @return zwraca n-ty element listy
    */
    const ReverseText& fragment(int n) const;
    /*
    @param tablica char,
    @brief operator -=, tworzy nowy fragment i dopina go do listy
    */
    void operator-=(const char *text);
    /*
    @param element ReverseText
    @brief operator -= dołącza do listy element ReverseText
    */
    void operator-=(ReverseText && t);
    /*
    @operator =, przenosi element t
    */
    void operator=(ReverseText && t);

  private:
    /*
    @param _prev, wskaznik na kolejny element listy
    */
    ReverseText *_prev;
    /*
    @rozmiar fragmentu (_text),
    */
    int _size;
     /*
    @param tablica char
    */
    char *_text;
};