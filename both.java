package practice;

import java.util.Scanner;

public class both {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner userInput=new Scanner(System.in);
		System.out.println("the no.which is divisible by both 3 and 5");
		for(int i=1;i<=100;i++)
		{
			if(i%3==0 && i%5==0)
			{
				System.out.println(i+"");
			}
		}
				

	}

}
