#include <iostream>

void heapify(int arr[], int size, int firstNum) {
    int largest = firstNum;
    int leftNum = 2 * firstNum + 1;
    int rightNum = 2 * firstNum + 2;

    if (leftNum < size && arr[leftNum > arr[largest]]) {
        largest = leftNum;
    }
    if (rightNum < size && arr[rightNum] > arr[largest]) {
        largest = rightNum;
    }
    if (largest != firstNum) {
        std::swap(arr[firstNum], arr[largest]);
        heapify(arr, size, largest);
    }
}

void heapSort(int arr[], int size) {
    for (int i = size/2 - 1; i >= 0; i--) {
        heapify(arr, size, i);
    }
    for (int i = size - 1; i > 0; i--) {
        std::swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
}

int main() {
    int arr[15];
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int element: arr) {
        std::cin >> element;
    }

}
