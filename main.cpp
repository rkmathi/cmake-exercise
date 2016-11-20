#include "main.hpp"

int main(int argc, char const* argv[]) {
  std::cout << "hello, cmake" << std::endl;

  // add(int, int) is defined at "lib/hoge.hpp"
  std::cout << "1 + 2 = " << add(1, 2) << std::endl;
  return 0;
}
