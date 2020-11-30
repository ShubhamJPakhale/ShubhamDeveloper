import java.lang.*;

import java.util.Scanner;

public class hello {
	public static void main(String[] args) {
		Scanner sc = new Scanner (System.in);
		int i;
		int j;
		System.out.println("input number:i= ");
		i = sc.nextInt();
		System.out.println("input number:j= ");
		j = sc.nextInt();
		System.out.println(i);
		System.out.println(j);
		int sum= i + j;
		System.out.println("SUM OF TWO MUMBER IS "+sum);
	}
}
