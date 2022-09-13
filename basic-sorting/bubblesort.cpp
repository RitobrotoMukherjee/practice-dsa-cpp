#include<iostream>
using namespace std;

void printArray(int arr[], int size) {
    cout << "Printing Array:" << endl;

    for(int i = 0; i < size; i++) {
        cout << arr[i] << ' ';
    }
}

int main() {
    int arr[6] = {1, 10, 6, 9, 7, 14};
    cout << "Before sort array: ";
    printArray(arr, 6);
    cout << endl << endl;

    cout << "After Bubble sort array: ";
}
