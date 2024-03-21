#include <iostream>

void heapify(float arr[], int heapSize, int rootIndex) {
    int largest = rootIndex;
    int leftChild = 2 * rootIndex;
    int rightChild = 2 * rootIndex + 1;

    if (leftChild < heapSize && arr[leftChild] > arr[largest]) {
        largest = leftChild;
    }
    if (rightChild < heapSize && arr[rightChild] > arr[largest]) {
        largest = rightChild;
    }
    if (largest != rootIndex) {
        std::swap(arr[rootIndex], arr[largest]);
        heapify(arr, heapSize, largest);
    }
}

void heapSort(float arr[], int size) {
    for (int i = size/2 - 1; i >= 0; i--) {
        heapify(arr, size, i);
    }
    for (int i = size - 1; i > 0; i--) {
        std::swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

void printArray(float arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
}

int main() {
    float arr[] = {1.2, 2.3, 1.11, 3.4, 5.5, 5.4, 5.3, 5.1, 1.5, 1.25, 5.41, 5.31, 5.11, 1.51, 1.251};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (float element: arr) {
        std::cin >> element;
    }

}
