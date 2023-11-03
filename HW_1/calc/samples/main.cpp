#include <iostream>
#include "include/calc.hpp"

int main(int argc, char** argv) {
  try {
    start_calculation();
  }
  catch (const std::exception exp) {
    std::cout << exp.what();
  }

  return 0;
}