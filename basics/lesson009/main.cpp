// Copyright 2020 Jean-Francois Weber-Marx

#include <iostream>

void PrintValue(std::string message, int value) {
  std::cout << message << " = " << value << '\n';
}

int main() {
  int x{10}, y{3};

  PrintValue("x", x);
  PrintValue("y", y);

  PrintValue("x + y", x + y);
  PrintValue("x - y", x - y);
  PrintValue("x * y", x * y);
  PrintValue("x / y", x / y);
  PrintValue("x % y", x % y);

  PrintValue("x", x);
  PrintValue("x++", x++);
  PrintValue("x++", x++);
  PrintValue("x", x);

  PrintValue("y", y);
  PrintValue("y--", y--);
  PrintValue("y--", y--);
  PrintValue("y", y);

  PrintValue("x", x);
  PrintValue("++x", ++x);
  PrintValue("++x", ++x);
  PrintValue("x", x);

  PrintValue("y", y);
  PrintValue("--y", --y);
  PrintValue("--y", --y);
  PrintValue("y", y);

  return 0;
}
