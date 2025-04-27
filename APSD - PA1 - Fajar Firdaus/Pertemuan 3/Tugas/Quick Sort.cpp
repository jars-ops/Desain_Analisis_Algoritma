#include <iostream>
using namespace std;

// Fungsi partisi
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}

// Fungsi Quick Sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high); 
    }
}

int main() {
    int arr[] = {8, 3, 5, 4, 7, 6};
    int n = 6;

    cout << "Sebelum Quick Sort: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    quickSort(arr, 0, n - 1);

    cout << "\nSetelah Quick Sort: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    return 0;
}

