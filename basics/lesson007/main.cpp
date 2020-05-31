// Copyright 2020 Jean-Francois Weber-Marx

#include <iostream>

void PrintAge(std::string s, int y) {
  std::cout << s << ' ' << y << " year";

  if (y > 1) {
    std::cout << 's';
  }

  std::cout << " old\n";
}

int main() {
  int years{1};
  std::string begin{"Hello I am"};

  PrintAge(begin, years++);
  PrintAge(begin, years++);
  PrintAge(begin, years++);
  PrintAge(begin, years++);

  return 0;
}
