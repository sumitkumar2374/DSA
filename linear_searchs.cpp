#include <iostream>
using namespace std;

int linearSearch( int arr[], int sz, int target){
    for(int i = 0; i <sz; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sz = 10;
    int target = 7;
    int result = linearSearch(arr, sz, target);

    if(result != -1){
        cout << "Element found at index: " << result << endl;

    } else {
        cout << " Element not found in the array.." << endl;
    }

    return 0;
}
