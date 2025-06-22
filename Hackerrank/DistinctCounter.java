// Problem: Distinct Counter (HackerRank)
// Link: https://www.hackerrank.com/contests/code4trinity/challenges/distinct-counter

import java.util.HashSet;

public class DistinctCounter{
    public static String hadXDistinct(int[] arr, int x){
        HashSet<Integer> hs = new HashSet<>();
        for(int i=0; i<arr.length; i++){
            hs.add(arr[i]);
        }

        if(hs.size() == x) return "yes";
        return "no";
    }

    public static void main(String[] args) {
        int[] arr = {1,2,3,4,4,3,2,1};        
        int x = 4;
        System.out.println(hadXDistinct(arr, x));
    }
}