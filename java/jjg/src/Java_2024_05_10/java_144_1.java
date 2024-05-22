package Java_2024_05_10;

import java.util.Arrays;
import java.util.StringTokenizer;

public class java_144_1 {
    public static int[] Add(int[] originalArr, int val){
        int[] newArray = Arrays.copyOf(originalArr, originalArr.length + 1);
        newArray[newArray.length - 1] = val;
        return newArray;
    }

    public static void main(String[] args) {
        String test1 = "1"
    }
}
