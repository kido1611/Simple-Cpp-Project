//
// Copyright 2024 Muhammad Abdusy Syukur
//

#include <bar.h>
#include <foo.h>
#include <foo_bar.h>

#include <iostream>

int main(int argc, char** argv) {
  FooBar foo_bar;
  Bar bar;
  Foo foo;

  std::cout << "Hello World" << std::endl;
  foo_bar.foo();

  bar.print();
  foo.print();
}
