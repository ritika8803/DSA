//maneuvering

// class maneuvering {
// 	static int numberOfPaths(int m, int n)
// 	{
// 		if (m == 1 || n == 1)
// 			return 1;

// 		return numberOfPaths(m - 1, n) + numberOfPaths(m, n - 1);
// 	}
// 	public static void main(String args[])
// 	{
//         System.out.print("all possible paths are:");
// 		System.out.println(numberOfPaths(3, 3));
// 	}
// }

// reverse maneuvering

class maneuvering {
	static int numberOfPaths(int m, int n)
	{
		if (m == 3 || n == 3)
			return 1;

		return numberOfPaths(m + 1, n) + numberOfPaths(m, n + 1);
	}
	public static void main(String args[])
	{
        System.out.print("all possible paths are:");
		System.out.println(numberOfPaths(1, 1));
	}
}
