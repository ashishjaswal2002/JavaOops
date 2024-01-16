
import java.util.*;

public class test {


   public static void main(String[] args) {


    List<String> list  = new ArrayList<String>();



    String arr[] = {"car","taco","new"};

    for (int i = 0; i < arr.length; i++) {

       char ch[] = arr[i].toCharArray();

       char ch2 = ch[0];

       ch[0] = Character.toUpperCase(ch2);
  

       String ans = "";

       for(int j=0;j<ch.length;j++){

            ans+=ch[j];
       }



       list.add(ans);

       
    
    }


    for(String x:list){
        System.out.println(x+" ");
    }





    
}


}