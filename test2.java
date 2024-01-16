import java.util.*;
public class test2 {



    public static void main(String[] args) {
        

        int arr[] = {10,15,32,37,39,40,67,87,97};
        int arr2 []= {5,11,33,43,47,67,68};


        List<Integer> li = new ArrayList<>();
   
         for(int x:arr){
            li.add(x);
         }

         for(int y:arr2){
            li.add(y);
         }


         Collections.sort(li);

          for(int x:li){
            System.out.print(x+" ");
          }


    }
    
}
