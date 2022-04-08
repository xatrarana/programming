public class acc{



    public void printNalme(int a) {
       for (int i = 0; i < a; i++) {
           System.out.println(i);
       }
    }


    public void concat(String a, String b){
             System.out.println(a+b);
    }
    public static void main(String[] args) {
        
     acc get = new acc();
     get.printNalme(5);
     get.concat("i love ", " apple");
        
    }
}