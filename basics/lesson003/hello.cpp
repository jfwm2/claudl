// Copyright 2020 Jean-Francois Weber-Marx

#include <iostream>

int main() {
  int years{5};
  int months = 12 * years;
  int half = years / 2;

  std::cout << "Hello, I am " << years << " years old." << std::endl;
  std::cout << years << " years is " << months << " months." << std::endl;
  std::cout << "Half of " << years << " is " << half << '.' << std::endl;

  years++;

  std::cout << "Next year, I will be " << years << " years old." << std::endl;
  std::cout << years << " years is not " << months << " months." << std::endl;

  months = 12 * years;
  half = years / 2;

  std::cout << years << " years is " << months << " months." << std::endl;
  std::cout << "Half of " << years << " is " << half << '.' << std::endl;
}
