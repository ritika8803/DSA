import java.util.Scanner;

class equilibriumArray {
	int equilibrium(int arr[], int n)
	{
		int i, j;
		int leftsum, rightsum;

		/* Check for indexes one by one until
		an equilibrium index is found */
		for (i = 0; i < n; ++i) {

			/* get left sum */
			leftsum = 0;
			for (j = 0; j < i; j++)
				leftsum += arr[j];

			/* get right sum */
			rightsum = 0;
			for (j = i + 1; j < n; j++)
				rightsum += arr[j];

			/* if leftsum and rightsum are same,
			then we are done */
			if (leftsum == rightsum)
				return i;
		}

		/* return -1 if no equilibrium index is found */
		return -1;
	}

	// Driver code
	public static void main(String[] args)
	{
		equilibriumArray equi = new equilibriumArray();
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

		// Function call
		System.out.println(equi.equilibrium(arr, n));
	}
}


