#include<iostream>
using namespace std;

void printArray(int arr[], int size) {
    cout << "Printing Array:" << endl;

    for(int i = 0; i < size; i++) {
        cout << arr[i] << ' ';
    }
}

void bubbleSort(int arr[], int size) {
    for(int round = 1; round < size; round++) {
        for(int i = 0; i < size - round; i++) {
            if(arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i+1]);
            }
        }
    }
}

int main() {
    int size = 6;
    int arr[size] = {2, 1, 6, 9, 7, 14};
    cout << "Before sort array: ";
    printArray(arr, size);
    cout << endl << endl;

    bubbleSort(arr, size);
    cout << "After Bubble sort array: ";
    printArray(arr, size);
}
