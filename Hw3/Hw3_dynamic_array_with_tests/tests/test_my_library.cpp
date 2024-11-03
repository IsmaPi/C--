#include "gtest/gtest.h"
#include "DynamicArray.h"

using namespace oop;

// Test for constructor and [] operator
TEST(DynamicArrayTest, ConstructorAndAccessTest) {
    DynamicArray arr(5, 10);  // Create an array of size 5, initialized with value 10

    ASSERT_EQ(arr[0], 10);
    ASSERT_EQ(arr[1], 10);
    ASSERT_EQ(arr[2], 10);
    ASSERT_EQ(arr[3], 10);
    ASSERT_EQ(arr[4], 10);
}

// Test for copy constructor
TEST(DynamicArrayTest, CopyConstructorTest) {
    DynamicArray arr(5, 10);
    DynamicArray copyArr = arr;  // Copy constructor

    ASSERT_EQ(copyArr[0], 10);
    ASSERT_EQ(copyArr[1], 10);
    ASSERT_EQ(copyArr[2], 10);
    ASSERT_EQ(copyArr[3], 10);
    ASSERT_EQ(copyArr[4], 10);

    // Ensure that changes to the copy do not affect the original
    copyArr[0] = 20;
    ASSERT_EQ(arr[0], 10);
    ASSERT_EQ(copyArr[0], 20);
}

// Test for move constructor
TEST(DynamicArrayTest, MoveConstructorTest) {
    DynamicArray arr(5, 10);
    DynamicArray moveArr = std::move(arr);  // Move constructor

    ASSERT_EQ(moveArr[0], 10);
    ASSERT_EQ(moveArr[1], 10);
    ASSERT_EQ(moveArr[2], 10);
    ASSERT_EQ(moveArr[3], 10);
    ASSERT_EQ(moveArr[4], 10);

    // The original array should no longer hold valid data
    ASSERT_EQ(arr[0], 0);  // Undefined behavior, but we expect it to be null or zero
}

// Test for copy assignment operator
TEST(DynamicArrayTest, CopyAssignmentOperatorTest) {
    DynamicArray arr(5, 10);
    DynamicArray copyArr(3, 5);  // Create a different array
    copyArr = arr;  // Use copy assignment operator

    ASSERT_EQ(copyArr[0], 10);
    ASSERT_EQ(copyArr[1], 10);
    ASSERT_EQ(copyArr[2], 10);
    ASSERT_EQ(copyArr[3], 10);
    ASSERT_EQ(copyArr[4], 10);
}

// Test for move assignment operator
TEST(DynamicArrayTest, MoveAssignmentOperatorTest) {
    DynamicArray arr(5, 10);
    DynamicArray moveArr(3, 5);
    moveArr = std::move(arr);  // Move assignment operator

    ASSERT_EQ(moveArr[0], 10);
    ASSERT_EQ(moveArr[1], 10);
    ASSERT_EQ(moveArr[2], 10);
    ASSERT_EQ(moveArr[3], 10);
    ASSERT_EQ(moveArr[4], 10);

    // The original array should no longer hold valid data
    ASSERT_EQ(arr[0], 0);  // Undefined behavior, but expected to be null or zero
}

// Test for concatenation operator (+)
TEST(DynamicArrayTest, ConcatenationOperatorTest) {
    DynamicArray arr1(3, 1);  // Array of [1, 1, 1]
    DynamicArray arr2(2, 2);  // Array of [2, 2]
    DynamicArray result = arr1 + arr2;  // Concatenate the arrays

    ASSERT_EQ(result[0], 1);
    ASSERT_EQ(result[1], 1);
    ASSERT_EQ(result[2], 1);
    ASSERT_EQ(result[3], 2);
    ASSERT_EQ(result[4], 2);
}

// Test for stream insertion operator (<<)
TEST(DynamicArrayTest, StreamInsertionOperatorTest) {
    DynamicArray arr(3, 5);  // Array of [5, 5, 5]
    std::ostringstream os;
    os << arr;  // Use the stream insertion operator

    ASSERT_EQ(os.str(), "5 5 5 ");
}

// Test for size mismatch on concatenation
TEST(DynamicArrayTest, SizeMismatchTest) {
    DynamicArray arr1(3, 1);
    DynamicArray arr2(2, 2);
    DynamicArray result = arr1 + arr2;

    ASSERT_EQ(result.getSize(), arr1.getSize() + arr2.getSize());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}