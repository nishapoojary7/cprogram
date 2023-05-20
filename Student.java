package AbstractDemo;

public class Student implements Resume {
	String usn;
	String name;
	String deciplain;
	double result;
	long phoneNo;
	public Student(String u,String n,String d,double r,long ph) {
		this.usn=u;
		this.name=n;
		this.deciplain=d;
		this.result=r;
		this.phoneNo=ph;	
	}
	@Override
	public void biodata() {
		// TODO Auto-generated method stub
		System.out.println("the usn="+this.usn);
		System.out.println("the name="+this.name);
		System.out.println("the deciplain="+this.deciplain);
		System.out.println("the result="+this.result);
		System.out.println("the phoneno="+this.phoneNo);
	}
}
