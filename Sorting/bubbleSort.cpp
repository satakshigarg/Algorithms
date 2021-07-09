void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

void bubbleSort(int *arr, int n) {
    for (int i = (n-1); i >= 0; i--) {
        for (int j = 0; j < i; j ++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}
