package practice;

import java.util.Scanner;

public class leap {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner userInput=new Scanner(System.in);
		int year=userInput.nextInt();
		if((year%400==0)||((year%4==0)&&(year%100!=0)))
		{
			System.out.println("leap year"+year);
		}
		else
		{
			System.out.println("not a leap year");
			
		}
	}
}
		

