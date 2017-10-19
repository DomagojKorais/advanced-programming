#include <iostream>

enum month { jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec };

using namespace std; //allow to avoid repeat std::, but it's dangerous.

int main() {
 // cout << nov << endl;
   cout << std::dec << endl ;  //dec è ambivalente perchè è anche un modo di dire sistema numerico decimale, easy to have bad surprises!

  return 0;
}
