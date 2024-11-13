#include "CppUTest/TestHarness.h"
// #include "fff/fff.h"

extern "C" {
#include "header.h"
}

// clang-format off

TEST_GROUP(Basic_g) {
    void setup() override {}
    void teardown() override {}
};

// clang-format on

TEST(Basic_g, simple) {
    CHECK_EQUAL(0, function());
}

