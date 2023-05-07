package practice;

import java.util.Scanner;

public class Even {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int number=100;
		Scanner userInput=new Scanner(System.in);
		System.out.println("enter the even no.from 1 to "+number);
		for(int i=1;i<=number;i++)
		{
			if(i%2==0) {
		System.out.println(i+" ");	
		}
		}
	}

}
