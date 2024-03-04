#include <stdio.h>
#include <stdlib.h>
void output(int a[],int n){
	for(int i=0; i<n; i++){
		printf("%d ", a[i]);
	}
}
void mergeArray(int a[], int left, int right, int midle){
	//ben trai: left => mid
	int lenght_Left = midle - left+1;
	//ben phai: mid+1 =>right
	int lenght_Right = right - midle;
	
	//Tao mang t?m thoi
	int array_Left[lenght_Left], array_Right[lenght_Right];
	//copy du lieu
	for(int i=0; i<lenght_Left; i++){
		array_Left[i] =a[left+i];
	}
	for(int i=0; i<lenght_Right; i++){
		array_Right[i] =a[midle + 1 + i];
	}
	
	//Gop 2 mang theo quy tac phan tu nho hon duoc vao mang truoc
	int i=0; //Vi tri hien tai cua phan mang tu ben trai
	int j=0; //Vi tri hien tai cua phan mang tu ben phai
	int k=left;
	while(i<lenght_Left && j<lenght_Right) {
		if(array_Left[i]<=array_Right[j]){
			a[k] = array_Left[i];
			i++;
		}else{
			a[k]=array_Right[j];
			j++;
		}
		k++;
	}

	//copy nhung phan tu ben trai chua duoc dua vao
	while(i<lenght_Left){
		a[k]=array_Left[i];
		i++;
		k++;
	}
	//copy nhung phan tu ben phai chua duoc dua vao
	while(j<lenght_Right){
		a[k]=array_Right[j];
		j++;
		k++;
	}
}
void mergeSort(int a[],int left,int right){
	if(left<right){
	//Tim vi tri o giua
	int midle = (left+right)/2;
	//Goi de quy ben trai va ben phai
	mergeSort(a,left, midle);
	mergeSort(a, midle+1, right);
	
	//Gop 2 ben trai va ben phai lai
	mergeArray(a, left, right, midle);
	}
}

int main(){
	int array[] = {12, 0, -3, 131, 53, 3103, 1, 3};
	int n = sizeof(array) / sizeof(array[0]);
	printf("Mang ban dau: ");
	output(array, n);
	mergeSort(array, 0, n-1);
	printf("\nMang sap xep: ");
	output(array, n);
	return 0;
}
