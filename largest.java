package practice;

import java.util.Scanner;

public class largest {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int n1,n2,n3;
		Scanner br=new Scanner(System.in);
		System.out.println("enter the num1");
		n1=br.nextInt();
		System.out.println("enter the num2");
		n2=br.nextInt();
		System.out.println("enter the num3");
		n3=br.nextInt();
		if(n1>n2&&n1>n3)
			System.out.println("the largest"+n1);
		else if(n2>n1&&n2>n3)
			System.out.println("the largest"+n2);
		else if(n3>n1&&n3>n2)
			System.out.println("the largest"+n3);
	}
}
