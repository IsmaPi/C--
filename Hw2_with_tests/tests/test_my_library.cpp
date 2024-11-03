#include "hw_20_2.h"  
#include "gtest/gtest.h"

using namespace detail;

TEST(DoublyLinkedListTest, InsertTest) {
    detail:: Node* node = detail:: create_node("Apple");
    node = detail:: insert(node, detail:: create_node("Banana"));
    node = detail:: insert(node, detail:: create_node("Cherry"));

    detail:: Node* current = node;

    ASSERT_EQ(current->value, "Cherry");
    ASSERT_EQ(current->next->value, "Banana");
    ASSERT_EQ(current->prev, nullptr);

    current = current->next;
    ASSERT_EQ(current->next->value, "Apple");
    ASSERT_EQ(current->prev->value, "Cherry");

    current = current->next;
    ASSERT_EQ(current->prev->value, "Banana");
    ASSERT_EQ(current->next, nullptr);

    while (node != nullptr) {
        detail:: Node* temp = node;
        node = node->next;
        delete temp;
    }
}


TEST(DoublyLinkedListTest, EraseTest) {
    detail::Node* node = detail::create_node("Apple");
    node = detail::insert(node, detail::create_node("Banana"));
    node = detail::insert(node, detail::create_node("Cherry"));
    while (node->prev != nullptr) {
        node = node->prev;
    }
    node = detail::erase(node->next);
    while (node->prev != nullptr) {
        node = node->prev;
    }
    detail:: Node* current = node;
    ASSERT_EQ(current->value, "Cherry");
    ASSERT_EQ(current->next->value, "Apple");
    ASSERT_EQ(current->prev, nullptr);

    current = current->next;
    ASSERT_EQ(current->value, "Apple");
    ASSERT_EQ(current->prev->value, "Cherry");
    ASSERT_EQ(current->next, nullptr);

    node = detail::erase(node); 
    while (node->prev != nullptr) {
        node = node->prev;
    }

    current = node;
    ASSERT_EQ(current->value, "Apple");
    ASSERT_EQ(current->prev, nullptr);
    ASSERT_EQ(current->next, nullptr);

    node = detail::erase(node);
    ASSERT_EQ(node, nullptr);

}

TEST(DoublyLinkedListTest, AddTest) {
    detail::Node* node = detail::create_node("Apple");
    node = detail::add(node, detail::create_node("Banana"));
    node = detail::add(node, detail::create_node("Cherry"));

    detail::Node* current = node;
    while (current->prev != nullptr) {
        current = current->prev;
    }

    ASSERT_EQ(current->value, "Apple");    
    ASSERT_EQ(current->next->value, "Banana");
    ASSERT_EQ(current->prev, nullptr);

    current = current->next;
    ASSERT_EQ(current->value, "Banana");
    ASSERT_EQ(current->next->value, "Cherry");
    ASSERT_EQ(current->prev->value, "Apple");

    current = current->next;
    ASSERT_EQ(current->value, "Cherry");
    ASSERT_EQ(current->prev->value, "Banana");
    ASSERT_EQ(current->next, nullptr);

    while (current != nullptr) {
        detail::Node* temp = current;
        current = current->next;
        delete temp;
    }
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}