#include <iostream>
using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int my_function(int arr[], int l, int h) {
    int pivot = arr[l];
    int i = l+1;
    int j = h;

    while (i <= j) {
        while ( arr[i] <= pivot) {
            i++;
        }
        while ( arr[j] > pivot) {
            j--;
        }
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[l], arr[j]);
    return j;
}

void quick_sort(int arr[], int l, int h) {
    if (l < h) {
        int per = my_function(arr, l, h);
        quick_sort(arr, l, per - 1);
        quick_sort(arr, per + 1, h);
    }
}

int main() {
    int arr[] = {5, 7, 2, 4, 9, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    quick_sort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
