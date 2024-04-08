
#include <gtest/gtest.h>

#include <iostream>

using namespace testing;

// This should get moved to a dedicated header. There is probably a better way
// to syncronize the function/subroutine names between this and the CMakeLists
#include "fortran_interface.h"
extern "C" {
    int FC_sum_ints(int* in0, int* in1);
    void FC_sum_real(double* sum, double* in0, double* in1);
}

TEST(demoTests, gtestRuns) {
    EXPECT_NEAR(1.0 + 2.0, 3.0, 1.0e-10);
}

TEST(demoTests, sumIntsWorks) {

    int one = 1;
    int two = 2;
    auto sum12 = FC_sum_ints(&one, &two);

    EXPECT_EQ(sum12, 3);

    EXPECT_NE(sum12, 5);
}

TEST(demoTests, sumRealsWorks) {

    double one = 1;
    double two = 2;
    double sum12 = 0;
    FC_sum_real(&sum12, &one, &two);

    EXPECT_EQ(sum12, 3);

    EXPECT_NE(sum12, 5);
}
