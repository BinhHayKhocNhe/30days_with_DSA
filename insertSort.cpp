//Insert sort
#include<stdio.h>
int insertSort(int arr[], int n){
	//		Mang ban dau
	printf("Mang sau ban dau: ");
	for(int i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
	for(int i =1; i<n ;i++) {
		int j=i;
		while(j>=0 && arr[j]<=arr[j-1]) {
			int temp = arr[j];
			arr[j] = arr[j-1];
			arr[j-1] = temp;
			j--;
		}
	}
}
int printSort(int arr[], int n){
//	Mang sap xep
	for(int i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
}
int main(){
	int arr[] = {5, 8, 4, 7, 10, 9};
	int n = sizeof(arr) / sizeof(arr[0]);
	insertSort(arr, n);
	printf("\nMang sau khi duoc sap xep: ");
	printSort(arr, n);
	return 0;
}
