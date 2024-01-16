import java.util.*;
public class test3 {



    public static void main(String[] args) {
        


        int arr[] = {1,6,8,4,9,2,3,1,7,1};

      ArrayList<Integer> li1 = new ArrayList<>();
      ArrayList<Integer> li2 = new ArrayList<>();
        int n= arr.length;

        int m  = 4;

        int ans[ ] = new int[n];

        for(int i=0;i<arr.length;i++){

            if(arr[i]<m){
                arr[i] = 1;
            }
        }


        for(int i=0;i<n;i++){
            if(arr[i]==1){
               li1.add(arr[i]);
            }
        }

        for(int i =0;i<n;i++){
            if(arr[i]!=1 ){
                li2.add(arr[i]);
            }
        }
   
        ArrayList<Integer> li3 = new ArrayList<Integer>();

        for(int x:li1){

            li3.add(x);

        }

        for(int x:li2){
            li3.add(x);
        }

       for(int x:li3){
        System.out.print(x+"");
       }
    }    
}
