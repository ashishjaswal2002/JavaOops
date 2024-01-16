import java.util.*;
public class codeforces {
    
  public static void main(String[] args) {
    
     
      Scanner sc = new Scanner(System.in);

      int n = sc.nextInt();
      


    int[][] arr= new int[n][3];


    for(int i=0;i<n;i++){
        for(int j=0;j<arr[0].length;j++){
            
            arr[i][j] = sc.nextInt();
        }
    }

    
    int pSolved =0;
    for(int i=0;i<arr.length;i++){
        int count =0;
        for(int j=0;j<arr[0].length;j++){
            if(arr[i][j]==1)
            count+=1;
          
        }
    
        if(count>=2){
         pSolved++;
        }
       
    }


    System.out.println(pSolved+" ");



  }


}
