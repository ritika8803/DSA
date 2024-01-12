import java.util.Scanner;
public class highestElem {
    public static void main(String[] args) {  
        int Size, i;
	    Scanner sc = new Scanner(System.in);
	 
		System.out.print(" Please Enter Number of elements in an array : ");
		Size = sc.nextInt();	
		
		int [] a = new int[Size];
		
		System.out.print(" Please Enter " + Size + " elements of an Array  : ");
		for (i = 0; i < Size; i++)
		{
			a[i] = sc.nextInt();
		}  
    
        int max = a[0];  
        for (i = 0; i < a.length; i++) {  
            //Compare elements of array with max  
           if(a[i] > max)  
               max = a[i];  
        }  
        System.out.println("Largest element present in given array: " + max);  
    }  
}  

