#include <exception>
#include <sstream>
#include <string>

class iterator_overflow : public exception {
public:
  iterator_overflow(int index, int max)
    : _index(index), _max(max) {}

  int index() { return _index; }
  int max()   { return _max; }

  const char* what() const;

private:
  int _index;
  int _max;
};

const char*
iterator_overflow::
what() const {
  ostringstream ex_msg;
  static string msg;

  ex_msg << "Internal error: current index "
         << _index << " exceeds maximum bound: "
         << _max;

  msg = ex_msg.str();

  return msg.c_str();
}
