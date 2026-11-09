#include <iostream>
using namespace std;

void reverseArr( int arr[], int sz){
    int start = 0;
    int end = sz - 1;
    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
        
    }
}

int main() {
    int arr[] = {1 ,2 , 3, 4, 5, 6, 7, 8 , 9, 10};
    int sz = 10;
    reverseArr(arr, sz);

    cout << "Now the array is reversed: " << endl;
    for (int i = 0; i < sz; i++){
        cout << arr[i] << " ";
    }
    cout << endl; 

    return 0;
}