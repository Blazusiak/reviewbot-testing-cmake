
#include "size.h"

std::ostream &operator<<(std::ostream &os, const size &sz) {
  os << "size(" << sz._w << "x" << sz._h << ")";
  //int *s = NULL;
  //*s = 42;
  return os;
}
