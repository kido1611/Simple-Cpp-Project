//
// Copyright 2024 Muhammad Abdusy Syukur
//

#include <foo_bar.h>

#include <iostream>
#include <random>

void FooBar::foo() {
  std::cout << "Hello from FooBar - " << bar() << std::endl;
}

int FooBar::bar() {
  std::random_device rd;
  std::mt19937 gen(rd());

  std::uniform_int_distribution<int> dis(1, 1000);

  return dis(gen);
}
