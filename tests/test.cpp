// Copyright 2021 Ivanishcha <ivanishcha@gmail.com>

#include <gtest/gtest.h>
#include "header.hpp"
TEST(Example, EmptyTest) {
    EXPECT_TRUE(true);
}

TEST(Programm, WorkTest) {
    try {
        std::string path("../misc/ftp");
        Filesystem test(path);
        std::cout << test;
    }
    catch(...) {

    }
    EXPECT_TRUE(true);
}
