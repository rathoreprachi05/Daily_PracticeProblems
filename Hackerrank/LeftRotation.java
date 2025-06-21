// https://www.hackerrank.com/challenges/array-left-rotation/problem
import java.util.ArrayList;
import java.util.Arrays;

class LeftRotation{

    public static ArrayList<Integer> rotateLeft(int d, ArrayList<Integer> arr){
        ArrayList<Integer> list = new ArrayList<>();

        list.addAll(arr.subList(d, arr.size()));
        list.addAll(arr.subList(0, d));
        return list;
    }
    public static void main(String[] args){
        ArrayList<Integer> arr = new ArrayList<>(Arrays.asList(1,2,3,4,5));
        int d = 2;

        ArrayList<Integer> result = rotateLeft(d, arr);
        System.out.println(result);
    }
}

