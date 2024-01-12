// approach of O(n*n)

import java.io.*;
import java.util.Scanner;
public class leaderArray
{
	/*Java Function to print leaders in an array */
	void printLeaders(int arr[], int n)
	{
		for (int i = 0; i < n; i++)
		{
			int j;
			for (j = i + 1; j < n; j++)
			{
				if (arr[i] <=arr[j])
					break;
			}
			if (j == n) // the loop didn't break
				System.out.print(arr[i] + " ");
		}
	}

	/* Driver program to test above functions */
	public static void main(String[] args)
	{
		leaderArray lead = new leaderArray();
        Scanner sc = new Scanner(System.in);
  
        // Take the array size from the user
        System.out.println("Enter the size of the array: ");
        int arr_size = 0;
        if (sc.hasNextInt()) {
            arr_size = sc.nextInt();
        }
  
        // Initialize the array's
        // size using user input
        int[] arr = new int[arr_size];
  
        // Take user elements for the array
        System.out.println(
            "Enter the elements of the array: ");
        for (int i = 0; i < arr_size; i++) {
            if (sc.hasNextInt()) {
                arr[i] = sc.nextInt();
            }
        }
		int n = arr.length;
		lead.printLeaders(arr, n);
	}
}
