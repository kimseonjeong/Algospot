package test_algospot;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int inputnum = sc.nextInt();
		
		while(inputnum-->0){
			String name = sc.next();
			System.out.println("Hello, "+name+"!");
		}
	}

}
