import java.util.Scanner;

public class SwapTwoNibbles {
    static int swapNibbles(int x) {
        return ((x & 0x0F) << 4 | (x & 0xF0) >> 4);
    }

    public static void main(String arg[]) {
        Scanner sc = new Scanner(System.in);
        int x;
        System.out.print("\nEnter the digit: ");
        x = sc.nextInt();
        int swap = swapNibbles(x);
        System.out.print("Output digit: " + swap);
    }
}

