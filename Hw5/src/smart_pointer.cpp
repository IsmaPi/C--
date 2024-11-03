#include <iostream>
#include <memory>
#include <vector>

class Resource {
public:
    Resource() { std::cout << "Resource acquired\n"; }
    ~Resource() { std::cout << "Resource destroyed\n"; }
};

std::unique_ptr<Resource> createResource() {
    return std::make_unique<Resource>();
}

class Database {
public:
    std::vector<int> data;
    Database() : data(10000000) {}
};

void fun() {
    std::unique_ptr<Database> p = std::make_unique<Database>();
}

int main() {
    // Using std::unique_ptr for Resource
    {
        std::unique_ptr<Resource> resourcePtr = createResource();
    }

    // Using raw pointer for Resource
    {
        Resource* rawPtr = new Resource();
        std::cout << "With the raw pointer we need the delete to be able to manually release the memory\n";
        delete rawPtr;
    }

    // Infinite Loop
    while (1) fun();

    return 0;
}