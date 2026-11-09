// Arry wala elements me se minimum number find karna hai
#include <iostream>
#include <climits>
using namespace std;

int smallest = INT_MAX;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sz = 10;

    for(int i = 0; i < sz; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }

    cout << "The minimum number in the array is: " << smallest << endl;

    return 0;
}