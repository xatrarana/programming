import java.util.Scanner;

/**
 * guess_word
 */
public class guess_word {

    public static void main(String[] args) {
        
        int total = 0;
        int grade_count = 1;

        Scanner scan = new Scanner(System.in);
        

        while (grade_count <= 7) {
         System.out.print("Enter the Grade: ");
         int grade = scan.nextInt();
         total = total + grade;
         grade_count++;


            
        }
        int avg = total / 7;
        System.out.println("the total of all subject is: " + total);
        System.out.println("the avarage is: " + avg);
        scan.close();

          


        
        
    }
}