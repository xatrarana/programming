

import java.util.ArrayList;
import java.util.Scanner;

import javax.swing.JOptionPane;

public class guibas {
    

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        ArrayList <String> words = new ArrayList<>();

        JOptionPane.showMessageDialog(null, "WEL-COME TO GUESS GAME");
        
        String in_value = JOptionPane.showInputDialog( null,"Enetr the word for guessing ");
        words.add(in_value);
        // JOptionPane.showMessageDialog(null, words.get(0));
        
        String app = words.get(0);
    

        int gues_lim = 3;
       while (gues_lim >= 1) {
          
           gues_lim--;
           JOptionPane.showMessageDialog(null, "_"+app.charAt(1)+"_");
          
           String in_word = JOptionPane.showInputDialog("You can guess now");
              
           if (words.get(0).equals(in_word)) {
               JOptionPane.showMessageDialog(null, "congraulasion");
               break;
                  
           }
           else{
               JOptionPane.showMessageDialog(null, "Sorry wrong guess. Guess remain is: "+ gues_lim);
           }
          
          
          
          
          
       }
      
        


        scan.close();


    }
}
