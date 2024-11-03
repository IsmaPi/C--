#include <string>
#include <iostream>

using namespace std;

int main() {
    cout << "What's your name" << endl;
    string name, lastname;
    int age;
    cin >> name >> lastname >> age;
    cout << "Your name is " << name << endl;

    return 0;
}