package de_quy;

public class Fibo {
	static int count = 1;

	private static void dequy(int pre1, int pre2) {
		if (count < 19) {
			int newFibo = pre1 + pre2;
			System.out.println(newFibo);
			pre2 = pre1;
			pre1 = newFibo;
			count++;
			dequy(newFibo, pre2);
		} else {
			return;
		}
	}

	public static void main(String[] args) {
		System.out.println(0);
		System.out.println(1);
		dequy(1, 0);
	}
}
