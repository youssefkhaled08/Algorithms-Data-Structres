#include <iostream>

using namespace std;

int iterativeBinarySearch(int* arr, int left, int right, int target);

int main(void){
    int size;
    cout << "Enter the size of the Array: ";
    cin >> size;

    int* arr = new int[size];
    int target;

    cout << "Enter a sorted Array of " << size << " numbers: ";
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }

    cout << "Enter a number to be searched: ";
    cin >> target;

    int index = iterativeBinarySearch(arr, 0, size - 1, target);
    if (index != -1) {
        cout << "\nNumber found at index : " << index + 1;
    } else {
        cout << "\nNumber not found.";
    }

    delete[] arr;
    return 0;    
}
int iterativeBinarySearch(int* arr, int left, int right, int target){
     
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (target == arr[mid])
            return mid;
        else if (target < arr[mid])
            right = mid - 1;
        else
            left = mid + 1;
    }
    return -1;
}
