//
// Copyright 2025 Muhammad Abdusy Syukur
//

#include <bar.hpp>
#include <foo.hpp>
#include <foo_bar.hpp>

#include "spdlog/cfg/env.h"
#include "spdlog/common.h"
#include "spdlog/spdlog.h"

int main() {
  spdlog::cfg::load_env_levels();
  spdlog::default_logger()->set_level(spdlog::level::trace);

  spdlog::trace("Starting example app");
  spdlog::debug("Hello, World!");

  auto foo_bar = new FooBar();
  int result = foo_bar->add(10, 20);

  spdlog::info("Result of 10 + 20 = {}", result);

  auto foo = new Foo();
  foo->print();

  auto bar = new Bar();
  bar->print();

  return 0;
}
