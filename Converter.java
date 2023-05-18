package AbstractDemo;
import java.util.Scanner;
import Currencyconversion.Currency;
import Distanceconversion.Distance;
import Timeconversion.Time;
public class Converter {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		 Currency c=new Currency();
		 Distance d=new Distance();
		 Time t=new Time();
		 Scanner s=new Scanner(System.in);
		 int ch,choice;
		 do
		 {
			 System.out.println("1.dollartorupee");
			 System.out.println("2.rupeetodollar");
			 System.out.println("3.eurotorupee");
			 System.out.println("4.rupeetoeuro");
			 System.out.println("5.yentorupee");
			 System.out.println("6.rupeetoyen");
			 System.out.println("7.kmtom");
			 System.out.println("8.mtokm");
			 System.out.println("9.milestokm");
			 System.out.println("10.kmtomiles");
			 System.out.println("11.hrtomin");
			 System.out.println("12.mintohr");
			 System.out.println("13.hrtosec");
			 System.out.println("14.sectohr");
			 System.out.println("enter your choice");
			 choice=s.nextInt();
			 switch(choice)
			 {
			 case 1:
			 {
				 c.dollartorupee();
				 break;
			 }
			 case 2:
			 {
				 c.rupeetodollar();
				 break;
			 }
			 case 3:
			 {
				 c.eurotorupee();
				 break;
			 }
			 case 4:
			 {
				 c.rupeetoeuro();
				 break;
			 }
			 case 5:
			 {
				 c.yentorupee();
				 break;
			 }
			 case 6:
			 {
				 c.rupeetoyen();
				 break;
			 }
			 case 7:
			 {
				 d.kmtom();
				 break;
			 }
			 case 8:
			 {
				 d.mtokm();
				 break;
			 }
			 case 9:
			 {
				 d.milestokm();
				 break;
			 }
			 case 10:
			 {
				 d.kmtomiles();
				 break;
			 }
			 case 11:
			 {
				 t.hrtomin();
				 break;
			 }
			 case 12:
			 {
				t.mintohr();
				 break;
			 }
			 case 13:
			 {
				 t.hrtosec();
				 break;
			 }
			 case 14:
			 {
				 t.sectohr();
				 break;
			 }
			 }
			 System.out.println("enter 0 to and 1 to continue");
			 ch=s.nextInt();
			 }while(ch==1); 
		 }
		 	}

