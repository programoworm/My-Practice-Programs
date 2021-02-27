import java.util.*;
class Q2{
	public static void main(String args[]){
		for(int i=0;i<args.length;i++){
			System.out.println(args[i]);
		}
		Scanner s=new Scanner(System.in);
		String str1=s.nextLine();
		s=new Scanner(System.in);
		String str2=s.nextLine();
		for(int i=0;i<args.length;i++){
			if(args[i].equals(str1))
				System.out.println(str2);
			else
				System.out.println(args[i]);
		}
	}
}
