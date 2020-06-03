// Copyright 2020 Jean-Francois Weber-Marx

#include <iostream>

void PrintInt(int x, int y) {
  std::cout << x << '+' << y << '=' << x + y << '\n';
}

void PrintString(std::string x, std::string y) {
  std::cout << x << '+' << y << '=' << x + y << '\n';
}

int main() {
  PrintInt(10, 20);
  PrintString("10", "20");
  return 0;
}
