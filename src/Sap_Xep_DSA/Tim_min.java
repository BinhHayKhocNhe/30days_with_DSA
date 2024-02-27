package Sap_Xep_DSA;

public class Tim_min {
	public static void main(String[] args) {
		int array[] = { 8, 4, 2, 9, 42, 6 };
		int min = array[0];
		for (int value : array) {
			if (value < min) {
				min= value ;
			}
		}
		System.out.println(min);
	}
}
