#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <tuple>

std::array<std::string, 10> names = {"Sofia", "Zaid", "Charlotte", "Jose", "Eva", "Sebas", "Laura"};

std::tuple<std::string, int, double> generateStudentInfo(){

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(18, 25);
    std::uniform_real_distribution<double> dist2(0.0, 10.0);
    std::uniform_int_distribution<int> dist3(0, 6);

    std::string name = names[dist3(gen)];
    int age = dist(gen);
    double grade = dist2(gen);

    return std::make_tuple(name, age, grade);

}

class Student{

    private:
    std::string name;
    int age;
    double grade;
    static int totalStudents;

    public:        

        // Default Constructor
        Student() : name("Unknown"), age(0), grade(0.0) {}

        // Constructor
        Student(std::string name, int age, double grade){
            this->name = name;
            this->age = age;
            this->grade = grade;

            if (age < 0 || age > 120){
                std::cout << "Invalid age" << std::endl;
            }

            if (grade < 0 || grade > 10){
                std::cout << "Invalid grade" << std::endl;
            }

            totalStudents++;
            
        }


        // Getters

        std::string getName() const {
            return name;

        }

        int getAge() const {
            return age;
            
        }

        double getGrade() const {
            return grade;
        
        }

        static int getTotalStudents(){ return totalStudents; }

        // Setters

        void setAge(int newAge){
            this->age = newAge;
            if (age < 0 || age > 120){
                std::cout << "Invalid age" << std::endl;
                
            }
        
        }

        void setGrade(double newGrade){
            this->grade = newGrade;
            if (grade < 0 || grade > 10){
                std::cout << "Invalid grade" << std::endl;
            }
        
        }

        void setName(std::string newName){
            this->name = newName;
        
        }

        // Friend function

        friend void printInfo(const Student s);

};

int Student::totalStudents = 0;



void printInfo(Student s){

    std::cout << "Name: " << s.getName() << std::endl;
    std::cout << "Age: " << s.getAge() << std::endl;
    std::cout << "Grade: " << s.getGrade() << std::endl;
    std::cout << "Total Students: " << Student::getTotalStudents() << std::endl;

}

int main(){

    int i = 0;

    while (i != 10){

        std::tuple<std::string, int, double> studentInfo = generateStudentInfo();

        std::string name = std::get<0>(studentInfo);
        int age = std::get<1>(studentInfo);
        double grade = std::get<2>(studentInfo);

        Student s1(name, age, grade);

        printInfo(s1);

        i++;
        
    }

    return 0;

}