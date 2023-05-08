package practice;

public class Student {
	public void identity(String x,int y) {
		String name=x;
		int rollNo=y;
		System.out.println("name="+name);
		System.out.println("rollno="+rollNo);
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Student st=new Student();
		st.identity("john",2);
	}
}
