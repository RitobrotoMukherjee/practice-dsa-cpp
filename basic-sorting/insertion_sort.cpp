#include<iostream>
using namespace std;

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
};

void insertionSort(int arr[], int size) {
    for(int i = 1; i < size; i++) {
        int temp = arr[i];
        int j = i - 1;
        for(; j >= 0; j--) {
            if(arr[j] > temp) {
                arr[j + 1] = arr[j];
            } else {
                break;
            }
        }
        arr[j + 1] = temp;
    }
}

int main () {
    int size = 6;
    int arr[] = { 15, 3, 12, 6, 9, 18 };

    cout << "Array before sorting: ";
    printArray(arr, size);

    cout << endl << "Array after insertion sort: ";
    insertionSort(arr, size);
    printArray(arr, size);
}