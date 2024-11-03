#include <iostream>
#include <random>
#include <vector>
#include <iomanip>

using namespace std;

double uniform_dist_generator(){
    
    random_device rd;
    auto seed = rd();
    mt19937 gen(seed);
    uniform_real_distribution<double> dist(0.0, 1.0);

    return dist(gen);

}


int main() {
    
    vector<float> v(0);

    for (int i = 0; i < 5; i++){
        v.push_back(uniform_dist_generator());
    }

    for (int i = 0; i < 5; i++){
        cout << v[i] << endl;
    }


    return 0;
}