// Static allocation of vector jo h wo compile time pe allocate hota hai aur uska size fixed hota hai.
// Dynamic allocation of vector jo h wo run time pe allocate hota hai aur uska size change hota hai.

// Vector ek tarah ka internal memory me array hota hai jo ki dynamically grow kar sakta hai. Vector ka size automatically increase ho jata hai jab hum usme naye elements add karte hai aur agar hum elements remove karte hai to vector ka size decrease ho jata hai.

// yaha pr do or terms h 1. Size: vector ka size kitna h wo batata hai. 2. Capacity: vector ka capacity kitna h wo batata hai ki vector me kitne elements store ho sakte hai bina reallocation ke.

// ek or baat ki jab hum vector me naye elements add karte hai aur agar vector ka size uski capacity se zyada ho jata hai to vector apni capacity ko double kar deta hai aur naye memory allocate karta hai aur purane elements ko naye memory me copy kar deta hai. Is process ko reallocation kehte hai.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};
    cout << "Size of vector: " << vec.size() << endl; // Size of vector: 5
    cout << "Capacity of vector: " << vec.capacity() << endl; // Capacity of vector: 5

    vec.push_back(6);
    cout << "Size of vector after push_back: " << vec.size() << endl; // Size of vector after push_back: 6
    cout << "Capacity of vector after push_back: " << vec.capacity() << endl; // Capacity of vector after push_back: 10

    vec.pop_back(); // Removes the last element
    cout << "Size of vector after pop_back: " << vec.size() << endl; // Size of vector after pop_back: 5
    cout << "Capacity of vector after pop_back: " << vec.capacity() << endl; // Capacity of vector after pop_back: 10

    return 0;
}  