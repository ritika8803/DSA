import java.util.Scanner;

public class moveHyphens {
    static void moveHyphensToFront(char[] str) {
        int length = str.length;
        int i = length - 1;

        for (int j = i; j >= 0; j--) {
            if (str[j] != '-') {
                char c = str[i];
                str[i] = str[j];
                str[j] = c;
                i--;
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the string: ");
        String input = sc.next();
        char[] str = input.toCharArray();
        moveHyphensToFront(str);
        System.out.println("Modified string: " + String.valueOf(str));
    }
}


