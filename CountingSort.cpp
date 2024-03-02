//#include <stdio.h>
#include <iostream>
using namespace std;
#define maxSize 100	
void input(int a[], int &n, int &max){
	do {
		cout<<"Nhap so luong phan tu cua mang: ";
		cin>>n;
	} while(n<=0||n>maxSize);
	max = a[0];
	for(int i=0; i<n; i++) {
		cout<<"Nhap a["<< i <<"] =";
		cin>>a[i];
		if(max<a[i]){
			max = a[i];
		}
	}
}

void output(int a[], int n){
	cout<<"Mang dang luu tru:\n";
	for(int i=0; i<n; i++){
		cout<<"a["<<i<<"] =" <<a[i]<<endl;
	}
}
void countingSort(int a[], int b[], int n, int k){
	int *c = new int[k+1];
	for(int i=0; i<=k; i++){
		c[i]=0;
	}
	for(int i=0; i<n; i++){
		c[a[i]]++;
	}
	//Viet nguoc lai neu giam dan
	int j=0; //int j = n - 1; 
	for(int i=0; i<=k;i++){
		while(c[i]>0){
		b[j++] = i; //b[j--] = i;
			c[i]--;
		}
	}
	delete []c;
}

int main(){
	int a[maxSize], b[maxSize], n, k;
	input(a, n, k);
	output(a,n);
	countingSort(a, b, n, k);
	output(b,n);
	return 0;
}
