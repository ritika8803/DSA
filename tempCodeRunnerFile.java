import java.io.*;

class assignment {
	static void combinationUtil(int arr[], int n, int k,
						int index, int data[], int i)
	{
		if (index == k) {
			for (int j = 0; j < k; j++)
				System.out.print(data[j] + " ");
			System.out.println("");
			return;
		}

		if (i >= n)
			return;
		data[index] = arr[i];
		combinationUtil(arr, n, k, index + 1, data, i + 1);
		combinationUtil(arr, n, k, index, data, i + 1);
	}

	static void printCombination(int arr[], int n, int k)
	{
		int data[] = new int[k];
		combinationUtil(arr, n, k, 0, data, 0);
	}
	public static void main(String[] args)
	{
		int arr[] = {1,2,3,4};
		int k = 2;
		int n = arr.length;
		printCombination(arr, n, k);
	}
}

