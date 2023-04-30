//mohammed mohammed khaled
//20216377
import java.util.*;
public class Main {
    public static void main(String[] args) {
        System.out.println("Enter how many numbers you're going to write: ");
        Scanner sc = new Scanner(System.in);
        int x;
        x = sc.nextInt();
        int[] arr = new int[x];
        System.out.println("Now enter the numbers:");
        for (int i = 0; i < x; i++) {
            arr[i] = sc.nextInt();
        }
        for (int i = 0; i < x; i++) {
            if (arr[i] > 0) arr[i] = 1;//positive num
            else if (arr[i] < 0) arr[i] = 2;//negative num
            else arr[i] = 0;
        }
        for (int i = 0; i < x; i++) {
            System.out.print(" " + arr[i] + " ");
        }
    }
}
