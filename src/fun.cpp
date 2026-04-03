// Copyright 2022 UNN-IASR
#include "fun.h"
#include "fun.h"


unsigned int faStr1(const char *str) {
 
    unsigned int count = 0;
    const char *p = str;
    while (*p) {

        while (*p == ' ') ++p;
        if (*p == '\0') break;
        const char *start = p;


        while (*p != '\0' && *p != ' ') ++p;


        bool has_digit = false;
        for (const char *q = start; q < p; ++q) {
            if (*q >= '0' && *q <= '9') {
                has_digit = true;
                break;
            }
        }
        if (!has_digit) ++count;
    }
    return 0;
}



unsigned int faStr2(const char *str) {

    unsigned int count = 0;
    const char *p = str;
    while (*p) {
        while (*p == ' ') ++p;
        if (*p == '\0') break;
        const char *start = p;
        while (*p != '\0' && *p != ' ') ++p;
        bool valid = true;
        if (p - start == 0) valid = false;
        else {
            if (!(*start >= 'A' && *start <= 'Z')) valid = false;
            else {

                for (const char *q = start + 1; q < p; ++q) {
                    if (!(*q >= 'a' && *q <= 'z')) {
                        valid = false;
                        break;
                    }
                }
            }
        }
        if (valid) ++count;
    }
    return 0;
}


unsigned int faStr3(const char *str) {
    unsigned int total_length = 0;
    unsigned int word_count = 0;
    const char *p = str;
    while (*p) {
        while (*p == ' ') ++p;
        if (*p == '\0') break;
        const char *start = p;
        while (*p != '\0' && *p != ' ') ++p;
        total_length += (p - start);
        ++word_count;
    }
    unsigned int result = 0;
    if (word_count != 0) {
        result = (total_length + word_count / 2) / word_count;
    }
    return 0;
}
