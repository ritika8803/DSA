import java.util.Scanner;

public class diffTwoDiaMatrix {
    public static int difference(int mat[][], int n)
    {  int d1 = 0, d2 = 0;
      
        for (int i = 0; i < n; i++)
        {
            d1 += mat[i][i];
            d2 += mat[i][n-i-1];
        }
        return Math.abs(d1 - d2);
    }
    public static void main(String[] args)
    {
       Scanner sc = new Scanner(System.in);
		int m, n;
		System.out.print("\nEnter the order of the matrix : ");
		m = sc.nextInt();
		n = sc.nextInt();
		int i, j;
		int[][] mat = new int[m][n];
		System.out.print("\nInput the matrix elements \n");
		for(i = 0; i < m; i++)
			{		
				for(j = 0; j < n; j++)
					mat[i][j] = sc.nextInt();
			}
        System.out.print(difference(mat, n));
        
    }
  }
