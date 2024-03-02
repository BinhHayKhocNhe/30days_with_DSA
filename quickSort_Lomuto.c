//quickSort lomuto
#include <stdio.h>
void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++){
    	printf("%d ", arr[i]);
	}
    printf("\n");
}
void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
//int partition(int arr[], int left, int right){
//	int pivot = arr[right];
//	int i = left - 1;
//	int j;
//	for(j=left; j<right;j++){
//		if(arr[j]<=pivot){
//			++i;
//			swap(&arr[i], &arr[j]);
//		}
//	}
//	++i;
//	swap(&arr[i], &arr[right]);
//	return i;
//}
int partition(int arr[], int left, int right) {
    int pivot = arr[left];
    int i = left, j;
    for (j = left + 1; j <= right; j++) {
        if (arr[j] < pivot) {
            ++i;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[left], &arr[i]);
    return i;
}


void quickSort(int arr[], int left, int right){
	if(left >= right) {
		return;
	}
	int pivot = partition(arr, left, right);
	quickSort(arr, left, pivot -1);
	quickSort(arr, pivot+1, right);
}
int main(){
	int array[] = {7, 10, 2, 5, 8, 13, 272, 1, -3, 91};
	int n = sizeof(array) / sizeof(array[0]);
	printf("Mang ban dau: ");
	printArray(array, n);
	quickSort(array, 0, n-1);
	printf("\nMang sap xep: ");
	printArray(array, n);
	return 0;
}
