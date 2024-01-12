import java.util.Scanner;

public class primeSieveAlgoDiff6 {
    public static void main(String[] args)
	{
        Scanner sc = new Scanner(System.in);
        int i;int j; int Count =0;
        int m = sc.nextInt();
        int n = sc.nextInt();
        boolean b[] = new boolean[n+1];
        for(i=m; i <=n-6; i++){
            b[i] = true;}
            for(i=m; i*i <=n-6; i++){
                    if (b[i] == true){
                        for(j=i*i; j <=n-6; j+=i){
                        b[j] = false;}
                    }
                }
        for(i=m; i <=n-6; i++){
           if( b[i] == true){
            if(b[i] && b[i+6]){
                   Count = Count + 1;
                    System.out.println(Count);
            }
           }
           
        }

    }
}
