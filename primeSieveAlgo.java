import java.util.*;
public class primeSieveAlgo {
    public static void main(String[] args)
	{
        Scanner sc = new Scanner(System.in);
        int i;int j;
        int n = sc.nextInt();
        boolean b[] = new boolean[n+1];
        for(i=2; i <=n; i++){
            b[i] = true;}
        for(i=2; i*i <=n; i++){
                if (b[i] == true){
                    for(j=i*i; j <=n; j+=i){
                    b[j] = false;}
                }
            }
        for(i=2; i <=n; i++){
           if( b[i] == true)
            System.out.println(i);
        }

    }
}
