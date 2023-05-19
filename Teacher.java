package AbstractDemo;
public class Teacher implements Resume {
	String staffid;
	String name;
	String designation;
	String qualification;
	double experience;
	long phoneNo;
	public Teacher(String sid,String n,String d,String q,double e,long ph) {
		this.staffid=sid;
		this.name=n;
		this.designation=d;
		this.qualification=q;
		this.experience=e;
		this.phoneNo=ph;	
	}
	@Override
	public void biodata() {
		// TODO Auto-generated method stub
		System.out.println("the staffid="+this.staffid);
		System.out.println("the name="+this.name);
		System.out.println("the designation="+this.designation);
		System.out.println("the qualification="+this.qualification);
		System.out.println("the experience="+this.experience);
		System.out.println("the phoneno="+this.phoneNo);
	}
}
