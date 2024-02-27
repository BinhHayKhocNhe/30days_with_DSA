#include <stdio.h>

// H�m s?p x?p ch�n
void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        // Di chuy?n c�c ph?n t? c?a arr[0..i-1], l?n hon key, d?n m?t v? tr� ph�a sau
        // v? tr� hi?n t?i c?a ch�ng
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// H�m in m?t m?ng ra m�n h�nh
void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// H�m main d? ki?m th?
int main() {
    int arr[] = {8,5, 2, 4, 6, 1, 3, 10, 7, 9, 1000};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Mang truoc khi sap xep: \n");
    printArray(arr, n);

    insertionSort(arr, n);

    printf("\nMang sau khi sap xep: \n");
    printArray(arr, n);

    return 0;
}

