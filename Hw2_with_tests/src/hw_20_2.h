#pragma once 

#include <string>

namespace detail{
    
    struct Node {
        std::string value;
        Node* next;
        Node* prev;
    };

    Node* create_node(const std::string& value);
    Node* insert(Node* p, Node* n);
    Node* erase(Node* n);
    Node* add(Node* p, Node* n);

}