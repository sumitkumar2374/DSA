#include <iostream>
#include <vector>
using namespace std;

// Vector function.
// 1. Size
// 2. push_back
// 3. pop_back
// 4. front
// 5. back
// 6. at
// 7. clear

// 1. Size: Returns the number of elements in the vector.
// 2. push_back: Adds an element to the end of the vector.  
// 3. pop_back: Removes the last element from the vector.
// 4. front: Returns the first element of the vector.
// 5. back: Returns the last element of the vector.
// 6. at: Returns the element at a specific index.
// 7. clear: Removes all elements from the vector.

int main() {
    vector<int> vec = {'a', 'b', 'c', 'd', 'e'};
    cout << "Size of vector: " << vec.size() << endl; // Size of vector: 5

    vec.push_back('f');
    cout << "Size of vector after push_back: " << vec.size() << endl; // Size of vector after push_back: 6

    vec.pop_back(); // Removes the last element
    cout << "Size of vector after pop_back: " << vec.size() << endl; // Size of vector after pop_back: 5



    

    return 0;
}