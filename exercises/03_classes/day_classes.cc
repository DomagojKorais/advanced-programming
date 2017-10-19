#include <iostream>
enum class Month{jan,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec}

class Date{


  int day;
  Month month;
  int year;

public:
//e abbiamo il costruttore
Date (int day, Month month, int year): day(day), month(month), year(year){}


int vday() const  {return day} 
};

int main  {

Date giorno(01,jan,2000);

std::cout <<giorno.vday();

}
