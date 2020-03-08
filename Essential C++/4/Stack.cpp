#include "Stack.h"
#include <iostream>
using namespace std;
bool Stack::pop(string &elem) {
  if (empty()) return false;
  elem = _stack.back();
  _stack.pop_back();
  return true;
}

bool Stack::peek(string &elem) {
  if (empty()) return false;
  elem = _stack.back();
  return true;
}

bool Stack::push(const string &elem) {
  if (full()) return false;
  _stack.push_back(elem);
  return true;
}


int main() {
  Stack st;
  string str;

  while (cin >> str && !st.full())
    st.push(str);

  if (st.empty()) {
    cout << '\n' << "empty" << endl;
    return 0;
  }

  st.peek(str);
  if (st.size() == 1 && str.empty()) {
    cout << "ee\n";
    return 0;
  }

  while (st.size()) {
    if (st.pop(str)) {
      cout << str << ' ';
    }
  }
}
