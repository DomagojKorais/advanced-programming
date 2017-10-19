#include <iostream>
//by default all the elements are visible. it's a particular kind of class.
// class is an abstract object, I define it once then I give it a value.
// A Class define a new kind of variable(like INT)
struct Point_s {
  double x;
  double y;
};


//by default the elemnts are invisible
class Point_c {
//If I ad "public" they became equivalent  
double x;
  double y;
};

int main() {
  Point_s ps; 
 //I can access to struct with ps.(name struct element)


  ps.x = 9.9;
  ps.y = 3. / 7;

  Point_c pc;
  // pc.x =7.6; // error

  Point_s* p = &ps;
//here I'm setting the the object x pointet by p to 0
  p->x = 0.0;

  std::cout << p->y << std::endl;

  return 0;
}
