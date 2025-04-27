#include <iostream>
using namespace std;

// Fungsi untuk menggabungkan dua bagian array
void merge(int arr[], int left, int mid, int right) {
    int i = left, j = mid + 1, k = 0;
    int temp[100];

    while (i <= mid && j <= right) {
        if (arr[i] < arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    while (i <= mid) temp[k++] = arr[i++];
    while (j <= right) temp[k++] = arr[j++];

    for (i = left, k = 0; i <= right; i++, k++)
        arr[i] = temp[k];
}

// Fungsi Merge Sort
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;

        mergeSort(arr, left, mid);         
        mergeSort(arr, mid + 1, right); 
        merge(arr, left, mid, right);   
    }
}

int main() {
    int arr[] = {8, 3, 5, 4, 7, 6};
    int n = 6;

    cout << "Sebelum Merge Sort: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    mergeSort(arr, 0, n - 1);

    cout << "\nSetelah Merge Sort: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    return 0;
}

