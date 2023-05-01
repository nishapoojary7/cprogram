package practice;

public class Duplicate {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int arr[]=new int[] {1,2,3,4,2,5,6,8,7,8};
		System.out.println("the duplicted array is given as");
		for(int i=0;i<arr.length;i++)
		{
			for(int j=i+1;j<arr.length;j++)
			{
				if(arr[i]==arr[j])
				
					System.out.println(arr[j]);
				
	}

}
	}
}
