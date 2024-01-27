import java.util.*;
public class test3 {



    public static void main(String[] args) {
        

  HashMap<Integer,Integer> mp  = new HashMap<Integer,Integer>();

   mp.put(1,3);
   mp.put(2,2);
 
   
   for(Map.Entry<Integer,Integer> e:mp.entrySet()){
       int key =e.getKey();
       int value =e.getValue();

       System.out.println(key+"->" +value);

   }
     
    }    
}
