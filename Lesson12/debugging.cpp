#include <iostream>
using namespace std;

void explode() {

    int* ptr = nullptr;
    //*ptr = 10;
}

class Buggy{
    int value = 0;
    public:
        Buggy(int value) {
        value = value;
        }

        void do_something() {
        auto mod = 123%value;
        std::cout << "The remainer of 123 divided by value is " << mod << std::endl;
        }
};
int main() {
    Buggy b(10);
    std::cout << "This line print" << std::endl;
    explode();
    std::cout << "This line print" << std::endl;
    b.do_something();
    return 0;
}