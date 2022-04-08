import java.util.Scanner;



public class funcOrobj {
    
    public void sum( ) {
        int a, b;
        Scanner scan = new Scanner(System.in);
        System.out.println("enter the number: ");
        a = scan.nextInt();
       

        System.out.println("enter the 2number: ");
        b = scan.nextInt();
        int c = a+b;
        System.out.println("the sum of c is: "+c);
        scan.close();

    }


    public static void main(String[] args) {
        
        
        
        funcOrobj sa = new funcOrobj();
        sa.sum();

        
    }
    
}
