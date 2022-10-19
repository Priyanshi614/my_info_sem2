import java.util.Scanner;
class HelloWorld{
	public static void main(String[] args){
		int x;
		System.out.println("hii welcome to java");
		 x = method2();
		System.out.println( x);
		Scanner sc = new Scanner (System.in);
		System.out.println(sc.nextInt());
	
	}
	static int method2()
	{
		System.out.println("method2");
		int y;
		y = 2;
		return y;
	}
	
}
