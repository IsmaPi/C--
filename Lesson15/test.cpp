#include <iostream>

class Base{
public:
virtual void print(){
std::cout << "Base" << std::endl;
}
};
class Derived : public Base{
public:
void print() override{
std::cout << "Derived" << std::endl;
}
};
int main(){
Base b;
Derived d;
d.print(); // Derived
b.print(); // Base
}