//mohammed mohammed khaled
//20216377
import java.util.*;
public class Main{
    public static void main(String[]args){
        System.out.println("Array size :");
        Scanner sc=new Scanner(System.in);
        int x;
        length=sc.nextInt();    
        int [] arr = new int[x];   
        System.out.println("Enter numbers :"); 
        for(int i=0;i<length;i++){
            arr[i]=sc.nextInt();    
        }
        for(int i=0 ; i < x ; i++){
            System.out.println("A["+i+"]"+" = "+arr[i]);
        }
    }
}
