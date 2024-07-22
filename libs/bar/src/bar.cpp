//
// Copyright 2024 Muhammad Abdusy Syukur
//

#include <bar.h>
#include <foo.h>

#include <iostream>

void Bar::print() {
  Foo foo;
  foo.print();

  std::cout << "Hello from bar lib" << std::endl;
}
