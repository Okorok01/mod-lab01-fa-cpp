// Copyright 2022 UNN-IASR
#include "fun.h"

#include <iostream>

int main() {
  const char* s1 = "  hello world 123 abc  ";
  std::cout << "faStr1(\"" << s1 << "\") = " << faStr1(s1) << std::endl;
  const char* s2 = "  Hello world 123 aBc  ";
  std::cout << "faStr2(\"" << s2 << "\") = " << faStr2(s2) << std::endl;
  const char* s3 = "  one two three  ";
  std::cout << "faStr3(\"" << s3 << "\") = " << faStr3(s3) << std::endl;
  const char* s4 = "a bb ccc";
  std::cout << "faStr3(\"" << s4 << "\") = " << faStr3(s4) << std::endl;
  const char* s5 = "";
  std::cout << "faStr3(\"\") = " << faStr3(s5) << std::endl;
  const char* s6 = "   ";
  std::cout << "faStr3(\"   \") = " << faStr3(s6) << std::endl;
  return 0;
}