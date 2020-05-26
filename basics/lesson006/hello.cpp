// Copyright 2020 Jean-Francois Weber-Marx

#include <iostream>

int GetMonthsFromYears(int nb_years) {
  int nb_months = nb_years * 12;
  return nb_months;
}

void PrintMonthsFromYears(int y) {
  int m = GetMonthsFromYears(y);
  std::cout << y << " years is " << m << " months.\n";
}

void PrintBye() {
  std::cout << "Bye!\n";
}

int main() {
  int years{5};

  std::cout << "Hello, now you are " << years << " years old. ";
  PrintMonthsFromYears(years);

  years++;

  std::cout << "Next year, you will be " << years << " years old. ";
  PrintMonthsFromYears(years);
  PrintBye();

  return 0;
}
