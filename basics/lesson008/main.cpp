// Copyright 2020 Jean-Francois Weber-Marx

#include <iostream>

int main() {
  int i{2};
  float f{2};
  double d{2};
  bool bt{true}, bf{false};

  std::cout << "i/3=" << i / 3 << '\n';
  std::cout << "f/3=" << f / 3 << '\n';
  std::cout << "d/3=" << d / 3 << '\n';

  std::cout << "third of i => " << static_cast<float>(i) / 3 << '\n';

  std::cout << "bt=" << bt << '\n';
  std::cout << "bf=" << bf << '\n';

  std::cout << "true and false => " << (true && false) << '\n';
  std::cout << "true or false => " << (true || false) << '\n';

  std::cout << "!false => " << (!false) << '\n';
  std::cout << "!true => " << (!true) << '\n';

  return 0;
}
