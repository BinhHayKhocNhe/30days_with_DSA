#include <stdio.h>
//De quy
int binary_Search_Recursive(int a[], int k, int left, int right) {
    if (left <= right) {
        int mid = left + (right - left) / 2;
        if (a[mid] == k) {
            return mid;
        }
        else if (a[mid] < k) {
            return binary_Search_Recursive(a, k, mid + 1, right);
        }
        else {
            return binary_Search_Recursive(a, k, left, mid - 1);
        }
    }
    return -1;
}
int main(){
	int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int length = sizeof(array) / sizeof(array[0]);
    int key;
    printf("Moi ban nhap so can tim: ");
    scanf("%d", &key);

    int result = binary_Search_Recursive(array, key, 0, length - 1);

    if (result == -1) {
        printf("Khong co so can tim\n");
    } else {
        printf("So %d ban can tim o vi tri: %d\n", key, result);
    }
    return 0;
}
