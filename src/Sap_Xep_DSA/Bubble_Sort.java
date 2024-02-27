package Sap_Xep_DSA;

public class Bubble_Sort {
	public static void main(String[] args) {
		int[] my_array = { 64, 34, 25, 12, 22, 11, 90, 5 };
		for (int i = 0; i < my_array.length - 1; i++) {
			boolean swapped = false;
			for (int j = 0; j < my_array.length - i - 1; j++) {
				if (my_array[j] < my_array[j + 1]) {
					int temp = my_array[j];
					my_array[j] = my_array[j + 1];
					my_array[j + 1] = temp;
					swapped = true;
				}
			}
			if (!swapped) {
				break;
			}
		}
		for (int i = 0; i < my_array.length; i++) {
			System.out.println(my_array[i]);
		}
	}
}
