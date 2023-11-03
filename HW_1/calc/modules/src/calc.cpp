#include <iostream>
#include "include/calc.hpp"

double addition(double op_1, double op_2) {
  return op_1 + op_2;
}
double subtraction(double op_1, double op_2) {
  return op_1 - op_2;
}
double multiplication(double op_1, double op_2) {
  return op_1 * op_2;
}
double division(double op_1, double op_2) {
  return op_1 / op_2;
}

double calc_operation(double op_1, double op_2, std::string op_symb) {
  if (op_symb == "+") {
    return addition(op_1, op_2);
  }
  if (op_symb == "-") {
    return subtraction(op_1, op_2);
  }
  if (op_symb == "*") {
    return multiplication(op_1, op_2);
  }
  if (op_symb == "/") {
    if (op_2 == 0.0) {
      throw std::exception("zero division");
    }
    return division(op_1, op_2);
  }

  throw std::exception("unsupported operation");
}

void start_calculation(void) {
  double op_1, op_2;
  std::string op_symb = "";
  std::cout << "Welcome to our calculator!\n";
  std::cout << "Our calculator support only 4 operation: addition (+), subtraction (-), multiplication (*), division (/)\n";

  std::cout << "Enter the first operand: ";
  std::cin >> op_1;
  std::cout << "Enter the desired operation: ";
  std::cin >> op_symb;
  std::cout << "Enter the second operand: ";
  std::cin >> op_2;

  double result = calc_operation(op_1, op_2, op_symb);
  std::cout << "Result: " << result << std::endl;
}