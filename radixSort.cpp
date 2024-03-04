#include <stdio.h>
int findMax(int arr[], int n){
	int max = arr[0];
	for(int i=1; i<n; i++){
		if(arr[i]>max){
			max = arr[i];
		}
	}
	printf("Max: %d \n", max);
	return max;
}
void radixSort(int arr[], int n){
	int max = findMax(arr, n);// Tim max
	int b[max+1];//k�ch thuoc mang = max + 1
	
	 //Khoi tao mang b l� 0
	for(int i=0; i<=max;i++){
		b[i]=0;
	}
	// Dem so luong xuat hien cua moi phan tu
    for (int i = 0; i < n; i++) {
        b[arr[i]]++;
    }
    // In c�c ph?n t? d� s?p x?p theo Radix Sort
    printf("Mang duoc sap xep la: ");
	for (int i = 0; i <= max; i++) {
        for (int j = 0; j < b[i]; j++) {
            printf("%d ", i);
        }
    }
}
int main(){
	int myArray[] = {8, 1, 0, 2, 9, 6, 3, 4, 6, 2, 12};
	int length = sizeof(myArray) / sizeof(myArray[0]);
	radixSort(myArray, length);
	return 0;
}
