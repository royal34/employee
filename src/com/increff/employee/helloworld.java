package com.increff.employee;

import java.util.Scanner;

public class helloworld {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int n = input.nextInt();
		int arr[] = new int[n];
		for (int i = 0; i < n; i++)
			arr[i] = i + 1;
		for (int i = 0; i < n; i++)
			System.out.print(arr[i] + " ");
		// System.out.println("Hello world");
	}
}
