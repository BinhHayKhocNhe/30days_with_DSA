#include <stdio.h>
int binary_Search(int a[], int k, int n){
	int left=0, right = n-1;
	while(left<=right){
		int mid = (left+right)/2;
		if(a[mid] == k){
			return mid;
		}else if(a[mid]<k){
			left = mid+1;
		}else{
			right= mid-1;
		}
	}
	return -1;
}
int main(){
	int array[] ={1, 2, 3, 4, 5 ,6 ,7 ,8, 9, 10} , key;
	int length = sizeof(array) / sizeof(array[0]);
	printf("Moi ban nhap so can tim: ");
	scanf("%d", &key);
	int result = binary_Search(array, key, length);
		if(result == -1){
		printf("Khong co so can tim");
	}else{
		printf("So %d ban can tim o vi tri: %d", key ,result);
	}
	return 0;
}
