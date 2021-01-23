// Copyright 2020 dima <dmitrymazhorinjr@gmail.com>

#include <gtest/gtest.h>

#include "iostream"
#include "testerCache.hpp"
TEST(Example, EmptyTest) {
  tester test;
  test.setBufs();
  test.straightTest();
  std::cout << test;
  test.revertTest();
  std::cout << test;
  test.randomTest();
  std::cout << test;
}