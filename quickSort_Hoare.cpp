#include <stdio.h>
//Phan hoach Hoare

int swap(int *a, int *b){
	int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high){
	int pivot = arr[low];
	int i = low -1, j = high +1;
	while(1) {
		do {
			++i;
		} while(arr[i] < pivot);
		do {
			--j;
		} while(arr[j] > pivot);
		if(i<j){
			swap(&arr[i], &arr[j]);
		}else{
			return j;
		}
	}
}

void quickSort(int arr[], int low, int high){
	if(low>=high){
		return;
	} 
//	Chia
	int pivot = partition(arr, low, high);
//	Tri
//Sap xep day ben trai
	quickSort(arr, low, pivot);
	
//Sap xep day ben phai
	quickSort(arr, pivot+1, high);
}

void printf(int arr[], int n){
	for(int i = 0;i<n;i++) {
		printf("%d " ,arr[i]);
	}
	printf("\n");
}

int main(){
	int array[] = {7, 10, 2, 5, 8, 13, 272, 1, -3, 91};
	int n =  sizeof(array) / sizeof(array[0]);
	printf("Mang ban dau: ");
	printf(array, n);
	quickSort(array, 0, n-1);
	printf("Mang sau khi sap xep: ");
	printf(array, n);
	return 0;
}
