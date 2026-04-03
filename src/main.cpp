// Copyright 2022 UNN-IASR
#include <iostream>
#include <cassert>
#include "fun.h"
int main() {
    run_tests();
    std::cout << "\nПримеры из условия:\n";
    const char *s1 = "  hello world 123 abc  ";
    std::cout << "faStr1(\"" << s1 << "\") = " << faStr1(s1) << " (ожидается 3)\n";
    const char *s2 = "  Hello world 123 aBc  ";
    std::cout << "faStr2(\"" << s2 << "\") = " << faStr2(s2) << " (ожидается 1)\n";
    const char *s3 = "  one two three  ";
    std::cout << "faStr3(\"" << s3 << "\") = " << faStr3(s3) << " (ожидается 4)\n";
    return 0;
}