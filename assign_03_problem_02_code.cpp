//mohammed mohammed khaled
//20216377
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int num = scanner.nextInt();

        int x = 0;
        int y = 1;

        System.out.print("The fibonacci sequence: " + x);

        if (num > 1) {
            System.out.print(" " + y);
        }

        for (int i = 3; i <= num; i++) {
            int z = x + y;
            System.out.print(" " + z);

            x = y;
            y = z;
        }

        System.out.println();
    }
}
