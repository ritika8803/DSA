import java.util.Scanner;

public class aliceAppleTree {
    static int getGreenApple(int N, int E, int W, int K, int M1){
        if (M1 <=(N*K)){
            return M1 ;
        }
        else if(M1 <=((N*K)+E+W)){
          return N * K + (M1 -N * K) * K;
        }
        else{
            return -1;
        }
    }
     static int getRedApple(int S, int E, int W, int K, int M2){
        if (M2 <=(S*K)){
            return M2 ;
        }
        else if(M2 <=((S*K)+E+W)){
          return S * K + (M2 -S * K) * K;
        }
        else{
            return -1;
        }
    }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
		int N, S, E, W, K, M1, M2;
		System.out.print("\nEnter the each tree produce in north: ");
		N = sc.nextInt();
        System.out.print("\nEnter the each tree produce in south: ");
		S = sc.nextInt();
        System.out.print("\nEnter the each tree produce east: ");
        E = sc.nextInt();
        System.out.print("\nEnter the each tree produce west: ");
        W = sc.nextInt();
        System.out.print("\nEnter the each tree produce: ");
        K = sc.nextInt();
        System.out.print("\nEnter the total Green tree produce: ");
        M1 = sc.nextInt();
        System.out.print("\nEnter the total Red tree produce: ");
        M2 = sc.nextInt();

        int treeGreen = getGreenApple(N,E,W,K,M1);
        int treeRed = getRedApple(S,E,W,K,M2);
        System.out.print("red tree" +treeRed +" ");
        System.out.print("green tree " +treeGreen);
        
    }
}