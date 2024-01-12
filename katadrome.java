import java.util.*;
public class katadrome {
    public static boolean equals( int n ){
    int a=0;
    int b=0;
    int length = String.valueOf(n).length();
    for(int i=0;i<length;i++){
        if(a<=b){
            a = n%10;
            n=n/10;
            b=n%10;
        }
        else{
            return false;
        }
    }
    return true;
    }
    public static void main(String[] arg){
  Scanner sc = new Scanner (System.in);
  System.out.println("enter the number here:");
  int n = sc.nextInt();
  if(equals(n)){
        System.out.println("Yes");
    }
    else{
      System.out.println("No");   
    }
  
}
   
}