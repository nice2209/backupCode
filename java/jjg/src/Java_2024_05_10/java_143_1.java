package Java_2024_05_10;

public class java_143_1 {
    public static void main(String[] args) {
        String str = "1, 2, 3, 4,,, 5, 6, 7, ,8, 9";
        String[] splittest = str.split(",");

        for(int i = 0; i < splittest.length; i++) {
            System.out.print(splittest[i]);
            if((i + 1) % 3 == 0)
            {
                System.out.println();
            }
        }
    }
}
