#include <stdio.h>
int linearSearch(int a[], int k, int n){
	a[n] = k;
	int i=0;
	while(a[i]!=k) {
		i++;
	}
	return (i < n) ? i : -1;
}
int main(){
	int array[] ={10, 2, 5, 12, 412, 2, 20, 33, 10} , key;
	int length = sizeof(array) / sizeof(array[0]); 
	printf("Moi ban nhap so can tim: ");
	scanf("%d", &key);
	int result = linearSearch(array, key, length);
	if(result == -1){
		printf("Khong co so can tim");
	}else{
		printf("So %d ban can tim o vi tri: %d", key ,result);
	}
	return 0;
}
