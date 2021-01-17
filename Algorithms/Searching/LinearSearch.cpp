#include <iostream>

using namespace std;

int linearSerach(int[], int, int);

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    int result = linearSerach(arr, size, num);
    (result != -1)
    ?   cout << "Element Found at Index " << result << endl
    :   cout << "Element not Found!";
}

int linearSerach(int arr[], int size, int num){
    for (int i = 0; i < size; i++)
    {
        if (num == arr[i])
        {
            return i;
        }
    }
    return -1;
}
