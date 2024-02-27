//de quy giai thua
#include <stdio.h>
unsigned long long factorial(int n){
	if(n==0||n==1){
		return 1;
	}else{
		return n*factorial(n-1);
	}
}
int main(){
	int n;
	printf("Nhap so can tinh giai thua: ");
	scanf("%d", &n);
	printf("Giai thua cua %d la: %llu",n, factorial(n));
	return 0;
}
