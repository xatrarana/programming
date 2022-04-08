public class instancevari {
    


     int c;       //instance varibale is created 

    /**
     * Innerinstancevari
     */
    public void addition() {
      
        int a = 100, b = 200;
        c = a+ b;
        System.out.println("the value of c is: "+c);
    }


    public void subtrac() {
        
        int x = 200, y = 400;
        c= x-y;
        System.out.println("the value of c is: "+c);
    }
    public static void main(String[] args) {
        instancevari all = new instancevari();           //new object is createrd
        all.addition();
        all.subtrac();
    }
}
