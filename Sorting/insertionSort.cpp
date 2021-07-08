void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    return;
}

void insertionSort(int *arr, int n) {
    for (int i = 1; i < n; i++) {
        int ele = arr[i], j = i-1;
        while (j >= 0 and arr[j] > arr[j+1]) {
            arr[j+1] = arr[j];
            j -= 1;
        }
        arr[j+1] = ele;
    }
}
