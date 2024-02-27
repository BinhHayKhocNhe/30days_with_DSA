//selectionSort
#include <stdio.h>
void selectionSort(int arr[], int n){
	int i, j, temp, min;
	for(i=0;i<n-1;i++) {
		min = i;
		for(j=i+1;j<n;j++) {
			if(arr[j]<arr[min]){
				min=j;
			}
		}
		temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp;
	}
}
void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++){
    	printf("%d ", arr[i]);
	}
    printf("\n");
}
int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    printf("Mang truoc khi sap xep: \n");
    printArray(arr, n);

    selectionSort(arr, n);

    printf("Mang sau khi sap xep: \n");
    printArray(arr, n);
    return 0;
}
