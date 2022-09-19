#include<iostream>
#include<cstdio>
using namespace std;

void printArray(int arr[], int size) {
    printf("Printing array of %d size: ", size);
    
    for (int i = 0; i < size; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

void selectionSort(int arr[], int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = i + 1; j < size; j++) {
            if(arr[i] > arr[j] ) {
                swap(arr[j], arr[i]);
            }
        }
    }
}

int main () {
    int size = 6;
    int arr[size] = { 3, 6, 1, 2, 9, 12 };

    cout << "Arary before sorting:" << endl;
    printArray(arr, size);

    selectionSort(arr, size);

    cout << "Arary after selection sorting:" << endl;
    printArray(arr, size);
}