#include "LibMat.h"

void print(const LibMat &mat) {
  cout << "In global print.\n";
  mat.print();
}

int main() {
  LibMat libmat;
  print(libmat);

  Book b("jojo", "Liu");
  print(b);

  AudioBook c("a", "b", "c");
  print(c);
  cout << c.title() << '\n'
       << c.author() << '\n'
       << c.narrator() << endl;
}
