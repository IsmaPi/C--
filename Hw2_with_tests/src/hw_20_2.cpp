#include "hw_20_2.h"
#include <iostream>
#include <string>


namespace detail{

    Node* create_node(const std::string& value){
        Node* new_node = new Node;
        new_node->value = value;
        new_node->next = nullptr;
        new_node->prev = nullptr;
        return new_node;
    }

    /**
    * @brief Insert a node before a given node. If the given node is nullptr,
    *        insert at the beginning.
    * @param p The node before which to insert
    * @param n The node to insert
    * @return The inserted node
    */
    Node* insert(Node* p, Node* n){
        if (p == nullptr){
            return n;
        } else {
            n->next = p;
            n->prev = p->prev;
            if (p->prev != nullptr) {
                p->prev->next = n;
            }
            p->prev = n;
            return n;
        }
    }

    /**
    * @brief Delete a node from the list
    * @param n The node to delete
    * @return The next node
    */
    Node* erase(Node* n){
        if (n->prev != nullptr) {
            n->prev->next = n->next;
        }
        if (n->next != nullptr) {
            n->next->prev = n->prev;
        }
        Node* next_node = n->next;
        delete n;
        return next_node;
    }

    /**
    * @brief Add a node after a given node.
    * @param p The node after which to add
    * @param n The node to add
    * @return The added node
    */
    Node* add(Node* p, Node* n){
        if (p == nullptr) {
            return n;
        } else {
            n->prev = p;
            n->next = p->next;
            if (p->next != nullptr) {
                p->next->prev = n;
            }
            p->next = n;
            return n;
        }
    }
}
