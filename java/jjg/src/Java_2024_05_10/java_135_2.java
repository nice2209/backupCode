package Java_2024_05_10;

public class java_135_2 {
    public static void main(String[] args) {
        String str = "HELLO!@#WORLD/-";
        String res = str.replaceAll("[^ㄱ-ㅎㅏ-ㅣ가-힣a-zA-Z0-9,.]", "*");

        System.out.println(res);
    }
}
