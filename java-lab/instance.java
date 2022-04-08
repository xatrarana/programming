import java.util.Scanner;

public class instance {
    

      

    public void printpatt(){
        for (int i = 0; i <= 6; i++) {
            for (int j = 0; j <= i ; j++) {
                System.out.print("*");
                
            }
            System.out.println();
            
        }
    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter the pattern you want: ");
        String sy = scan.next();

        instance run = new instance();
        
        if(sy.equals("*")){
          run.printpatt();
        }
         scan.close();
        
    }
}
