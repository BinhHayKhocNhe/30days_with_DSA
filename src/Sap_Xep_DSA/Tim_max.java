package Sap_Xep_DSA;

public class Tim_max {
	public static void main(String[] args) {
		int array[] = { 12, 93, 23, 717, 9271, 213 };
		int max = array[0];
		for (int i : array) {
			if (i > max) {
				max = i;
			}
		}
		System.out.println(max);
	}
}
