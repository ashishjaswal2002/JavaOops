

import java.util.*;

public class test4 {

    static void hashingSort(int[] first, int[] second, int p, int q) {
        Map<Integer, Integer> freq = new HashMap<>();

        for (int i = 0; i < p; i++) {
            freq.put(first[i], freq.getOrDefault(first[i], 0) + 1);
        }

        int index = 0;
        for (int i = 0; i < q; i++) {
            while (freq.getOrDefault(second[i], 0) > 0) {
                first[index++] = second[i];
                freq.put(second[i], freq.get(second[i]) - 1);
            }
            freq.remove(second[i]);
        }

        int i = index;
        for (Map.Entry<Integer, Integer> entry : freq.entrySet()) {
            while (entry.getValue() > 0) {
                first[index++] = entry.getKey();
                entry.setValue(entry.getValue() - 1);
            }
        }

        Arrays.sort(first, i, index);
    }

    static void printArray(int[] arr, int q) {
        for (int i = 0; i < q; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {


        Scanner sc = new Scanner(System.in);



        int n = sc.nextInt();
        int m = sc.nextInt();

        int arr[] = new int[n];
       for(int i=0;i<n;i++){
         arr[i] = sc.nextInt();
       }

       int arr2[] =  new int[m];

       for(int i=0;i<n;i++){
        arr2[i] = sc.nextInt();
      }


        
        int p = arr.length;
        int q = arr2.length;

        hashingSort(arr, arr2, p, q);
       
    }
}
