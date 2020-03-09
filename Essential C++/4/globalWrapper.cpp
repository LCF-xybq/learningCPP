#include "globalWrapper.h"
#include <iostream>


string globalWrapper::_program_name;
string globalWrapper::_version_stamp;
int globalWrapper::_version_number = 6;
int globalWrapper::_tests_run = 8;
int globalWrapper::_tests_passed = 12;

int main() {
  int a = globalWrapper::version_number();
  int b = globalWrapper::tests_run();
  int c = globalWrapper::tests_passed();

  std::cout << a << '\n' << b << '\n' << c << std::endl;

  return 0;
}
