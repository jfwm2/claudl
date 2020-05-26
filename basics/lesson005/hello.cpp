// Copyright 2020 Jean-Francois Weber-Marx

#include <iostream>  // this provides cin, cout, and endl

int main() {
  std::cout << "How old are you?" << std::endl; 

  int years{};  // zero initialization
  // Zero initialization generally initializes the variable to
  // zero (or empty, if that’s more appropriate for a given type).

  std::cout << "Enter you age in years: ";
  std::cin >> years;
  
  std::cout << "Hello, now you are \t" << years << " years old.\n";
  
  years++;

  std::cout << "Next year, you will be " << '\t'
	    << years << " years old." << '\n';

  return 0;  // if there is no error, we return 0
}
