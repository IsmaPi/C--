#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <tuple>

class Person{

    public:

    std::string name;
    int age;
    std::vector<std::string> hobbies;

    void setName(const std::string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setHobbies(const std::vector<std::string>& newHobbies) {
        hobbies = newHobbies;
    }

    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;  
    }

    std::vector<std::string> getHobbies() const {
        return hobbies;
    }

    Person(std::string name, int age, std::vector<std::string> hobbies) : name(name), age(age), hobbies(hobbies) {}     
            
};

int main(){
    Person p1{"Alice", 30, {"reading", "hiking"}};
    Person p2 = p1; // Compiler-generated copy constructor
    p2.name = "Bob";
    p2.hobbies.push_back("swimming");
}