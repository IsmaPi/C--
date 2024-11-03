#include <iostream>
#include <random>
#include <vector>
#include <numeric>

using namespace std;

int random_num_generator(){

    random_device rd;
    auto seed = rd();
    mt19937 gen(seed);
    uniform_int_distribution<int> dist(1, 6);
    //cout << dist(gen) << endl;

    return dist(gen);
}

int main(){

    int sum = 0;
    vector<int> v(0);

    for (int i = 0; i < 5; i++){

        v.push_back(random_num_generator());
        cout << v[i] << endl;
        sum += v[i];

    }

    if (sum != accumulate(v.begin(), v.end(), 0)){
        cout << "The sum is incorrect" << endl;
    }

    cout << "Sum of all the elements in the vector: " << sum << endl;

    return 0;

}