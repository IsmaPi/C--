#include "gtest/gtest.h"
#include "expression.h"

using namespace expression;

// Test for the Constant class constructor and evaluation
TEST(ExpressionTest, ConstantConstructorAndEvaluateTest) {
    Constant c(5.0);  // Create a constant expression with value 5.0

    ASSERT_EQ(c.evaluate(), 5.0);  // The evaluation should return 5.0
    ASSERT_EQ(c.toString(), "5.000000");  // The string should match the value
}

// Test for the BinaryPlus class constructor and evaluation
TEST(ExpressionTest, BinaryPlusConstructorAndEvaluateTest) {
    Constant c1(5.0);  // Create two constants
    Constant c2(3.0);
    BinaryPlus bp(c1, c2);  // Create a binary plus expression with c1 + c2

    ASSERT_EQ(bp.evaluate(), 8.0);  // The evaluation should return 5 + 3 = 8
    ASSERT_EQ(bp.toString(), "(5.000000 + 3.000000)");  // The string should represent the addition
}

// Test for nested BinaryPlus evaluation
TEST(ExpressionTest, NestedBinaryPlusEvaluateTest) {
    Constant c1(1.0);
    Constant c2(2.0);
    Constant c3(3.0);
    BinaryPlus bp1(c1, c2);  // (1 + 2)
    BinaryPlus bp2(bp1, c3);  // ((1 + 2) + 3)

    ASSERT_EQ(bp2.evaluate(), 6.0);  // 1 + 2 + 3 = 6
    ASSERT_EQ(bp2.toString(), "((1.000000 + 2.000000) + 3.000000)");  // String representation of nested expression
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}