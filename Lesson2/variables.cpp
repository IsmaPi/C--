#include <iostream>
# include <string>

using namespace std;

int main(){

//    int a = 0;
//    int b = 1;
//    int c = a + b;
//    cout << c << endl;

//    int d = 0;
//    cout << d++ << endl;
//    cout << d << endl;

//    int e = 0;
//    cout << ++e << endl;
//    cout << e << endl;

    // The difference between the two is that the first one increments the value of d after it is printed, while the second one increments the value of e before it is printed.

//    auto f = 1;

    // Auto is a dynamic type that can be used to declare variables without specifying the type. The compiler will automatically determine the type of the variable based on the value assigned to it. It needs to have a value assigned to it when it is declared.

    int g = 1;
    int h = 0;

//    if (g > h){
//        cout << "g is larger than h" << endl;
//    }

    auto comp = g <=> h;

    if (comp == 0){
        cout << "g is equal to h" << endl;
    } else if (comp > 0){
        cout << "g is larger than h" << endl;
    } else {
        cout << "g is smaller than h" << endl;
    }

    // The operator <=> is used to compare if two variables are greater than each other or equal. 

    return 0;
} 