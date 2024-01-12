import java.util.*;

class block_swap
{
	// Wrapper over the recursive function leftRotateRec()
	// It left rotates arr[] by d.
	public static void leftRotate(int arr[], int d,
												int n)
	{
		leftRotateRec(arr, 0, d, n);
	}

	public static void leftRotateRec(int arr[], int i,
								int d, int n)
	{
		/* Return If number of elements to be rotated
		is zero or equal to array size */
		if(d == 0 || d == n)
			return;
		
		/*If number of elements to be rotated
		is exactly half of array size */
		if(n - d == d)
		{
			swap(arr, i, n - d + i, d);
			return;
		}
		
		/* If A is shorter*/	
		if(d < n - d)
		{
			swap(arr, i, n - d + i, d);
			leftRotateRec(arr, i, d, n - d);	
		}
		else /* If B is shorter*/	
		{
			swap(arr, i, d, n - d);
			leftRotateRec(arr, n - d + i, 2 * d - n, d); /*This is tricky*/
		}
	}

/*UTILITY FUNCTIONS*/
/* function to print an array */
public static void printArray(int arr[], int size)
{
	int i;
	for(i = 0; i < size; i++)
		System.out.print(arr[i] + " ");
	System.out.println();
}

/*This function swaps d elements
starting at index fi with d elements
starting at index si */
public static void swap(int arr[], int fi,
						int si, int d)
{
	int i, temp;
	for(i = 0; i < d; i++)
	{
		temp = arr[fi + i];
		arr[fi + i] = arr[si + i];
		arr[si + i] = temp;
	}
}

// Driver Code
public static void main (String[] args)
{   
    Scanner sc = new Scanner(System.in);
  
        // Take the array size from the user
        System.out.println("Enter the size of the array: ");
        int n = 0;
        if (sc.hasNextInt()) {
            n = sc.nextInt();
        }
  
        // Initialize the array's
        // size using user input
        int[] arr = new int[n];
  
        // Take user elements for the array
        System.out.println(
            "Enter the elements of the array: ");
        for (int i = 0; i < n; i++) {
            if (sc.hasNextInt()) {
                arr[i] = sc.nextInt();
            }
        }
        int d;
		System.out.print("enter the number from how much number you want to rotate the array?");
		d = sc.nextInt();
	leftRotate(arr, d, n);
	printArray(arr, n);	
}
}

// This code is contributed by codeseeker

