import java.util.ArrayList;
import java.util.Scanner;

/**
 * usrinavgcalc
 */
public class usrinavgcalc {
 public static void main(String[] args) {
     
    Scanner scan = new Scanner(System.in);
    ArrayList <String> words = new ArrayList<>();
    System.out.println();
    System.out.println();
    System.out.println("----------WEL-COME TO GUESS THE WORD----------");
    System.out.println();
    System.out.println();
     

    System.out.print("Enter word for guessing: ");
    String usr_guss = scan.next();
    words.add(usr_guss);



     System.out.println();
     System.out.println();
     System.out.println();
   
     System.out.println();
     System.out.println();
    String app = words.get(0);
    

      int gues_lim = 3;
     while (gues_lim >= 1) {
        
         gues_lim--;

         System.out.println("_ "+app.charAt(1)+ " _");
         System.out.println("YOU can guess now: ");
         String in_word = scan.next();
           
         if (words.get(0).equals(in_word)) {
             System.out.println("congraulasion");
             break;
                
         }
         else{
             System.out.println("Sorry wrong guess. Guess remain is: "+ gues_lim);
         }
        
        
        
        
        
     }
    
    
    
   
    
 





    scan.close();
 }
    
}

