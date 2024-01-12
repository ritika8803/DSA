import java.util.*;

class weight{
static int distinctSubString(String P, String Q,
					int K, int N)
{
	HashSet<String> S = new HashSet<String>();
	for (int i = 0; i < N; ++i) {
		int sum = 0;
		String temp = "";

		for (int j = i; j < N; ++j) {

			int pos = P.charAt(j) - 'a';
			sum = sum + Q.charAt(pos) - '0';
			temp = temp + P.charAt(j);

			if (sum <= K) {
				S.add(temp);
			}

			else {
				break;
			}
		}
	}
	return S.size();
}

public static void main(String[] args)
{
	String P = "abcd";
	String Q = "12345678901234567890123456";
	int K = 3;
	int N = P.length();

	System.out.print(distinctSubString(P, Q, K, N));
}
}

