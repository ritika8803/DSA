// approach of O(n)

import java.io.*;
import java.util.Scanner;
public class leaderArray_n
{
	/* Java Function to print leaders in an array */
	void printLeaders(int arr[], int size)
	{
		int max_from_right = arr[size-1];

		/* Rightmost element is always leader */
		System.out.print(max_from_right + " ");
	
		for (int i = size-2; i >= 0; i--)
		{
			if (max_from_right < arr[i])
			{		
			max_from_right = arr[i];
			System.out.print(max_from_right + " ");
			}
		}
	}

	/* Driver program to test above functions */
	public static void main(String[] args)
	{
		leaderArray_n lead = new leaderArray_n();
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

