#include <iostream>
#include <vector>
using namespace std;

// vector me 3 tarah se declaration kar sakte hai
// 1. vector<int> vec; // empty vector

// 2. vector<int> vec(5, 0); // vector with size 5, initialized with 0

// 3. vector<int> vec = {1, 2, 3, 4, 5}; // vector with initial values

// Compile ke liye command: g++ -std=c++14 vector.cpp -o vector
int main (){
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << vec[0] << endl; // 1
    cout << vec[5] << endl; // 6

    // Print all elements of the vector using for loop
    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }

    // Print all elements of the vector using for each loop
    for(int x : vec){
        cout << x << " ";
    }
    return 0;
}



