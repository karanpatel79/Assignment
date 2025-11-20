
import java.util.Scanner;

public class Lab19 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int[][] a = new int[2][2];
        int[][] b = new int[2][2];
        System.out.println("Enter 4 elements for Matrix A:");
        for(int i=0;i<2;i++)
            for(int j=0;j<2;j++)
                a[i][j]=sc.nextInt();
        System.out.println("Enter 4 elements for Matrix B:");
        for(int i=0;i<2;i++)
            for(int j=0;j<2;j++)
                b[i][j]=sc.nextInt();
        System.out.println("Addition:");
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++)
                System.out.print((a[i][j]+b[i][j])+" ");
            System.out.println();
        }
        sc.close();
    }
}
