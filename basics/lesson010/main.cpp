// Copyright 2020 Jean-Francois Weber-Marx

#include <iostream>

void CompareEqual(int x, int y) {
  if (x == y) {
    std::cout << x << " and " << y << " are equal\n";
  } else {
    std::cout << x << " and " << y << " are not equal\n";
  }
}

void CompareDifferent(int x, int y) {
  if (x != y) {
    std::cout << x << " and " << y << " are different\n";
  } else {
    std::cout << x << " and " << y << " are not different\n";
  }
}

void CompareGreaterThan(int x, int y) {
  if (x > y) {
    std::cout << x << " is greater than " << y << '\n';
  } else {
    std::cout << x << " is not greater than " << y << '\n';
  }
}

void CompareLessThan(int x, int y) {
  if (x < y) {
    std::cout << x << " is less than " << y << '\n';
  } else {
    std::cout << x << " is not less than " << y << '\n';
  }
}

void CompareGreaterThanOrEqual(int x, int y) {
  if (x >= y) {
    std::cout << x << " is greater than or equal to " << y << '\n';
  } else {
    std::cout << x << " is not greater than or equal to " << y << '\n';
  }
}

void CompareLessThanOrEqual(int x, int y) {
  if (x <= y) {
    std::cout << x << " is less than or equal to " << y << '\n';
  } else {
    std::cout << x << " is not less than or equal to " << y << '\n';
  }
}

int main() {
  CompareEqual(2, 2);
  CompareEqual(1, 2);

  CompareDifferent(1, 2);
  CompareDifferent(1, 1);

  CompareGreaterThan(1, 2);
  CompareGreaterThan(3, 2);
  CompareGreaterThan(2, 2);

  CompareLessThan(1, 2);
  CompareLessThan(3, 2);
  CompareLessThan(2, 2);

  CompareGreaterThanOrEqual(1, 2);
  CompareGreaterThanOrEqual(3, 2);
  CompareGreaterThanOrEqual(2, 2);

  CompareLessThanOrEqual(1, 2);
  CompareLessThanOrEqual(3, 2);
  CompareLessThanOrEqual(2, 2);

  return 0;
}
