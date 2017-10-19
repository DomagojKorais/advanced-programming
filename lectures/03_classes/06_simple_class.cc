#include <iostream>

#include <string>

class Vector {
  double* elem;
  unsigned int _size;
//here we have something about a way to prevent memory leak.
 public:
  Vector(const unsigned int size) : _size{size}, elem{new double[size]} {}
//sintassi equivalente  Vector(const unsigned int size) : _size(size), elem(new double[size]) {}



//RAII resource acquisition is initialization.  A VERY IMPORTANT  CONCEPT, release in the constructor so I don't have to do that by hand.
  ~Vector() { delete[] elem; }

  unsigned int size() const { return _size; }

  double& operator[](const unsigned int i) { return elem[i]; }

  const double& operator[](const unsigned int i) const { return elem[i]; }

  void pretty_print() const;//const at the end assure the compiler that pretty_print will not change the values of the constants, otherwise the compiler complains
};

int main() {
  Vector v{10};

  for (auto i = 0; i < v.size(); ++i)
    v[i] = i;

  v.pretty_print();

  Vector* pv = &v;

  pv->pretty_print();

  return 0;
}

void Vector::pretty_print() const {
  std::cout << "Vector allocated at " << elem << std::endl;
  for (auto i = 0; i < _size; ++i)
    std::cout << "elem[" << i << "] = " << elem[i] << std::endl;
}
