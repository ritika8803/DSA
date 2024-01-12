public class lexiFistPalindrome{
    public static String findPalindromicString(String str) {
        int[] charCount = new int[26];
        int oddCount = 0;
        StringBuilder front = new StringBuilder();
        StringBuilder rear = new StringBuilder();
        StringBuilder middle = new StringBuilder();

        for (char ch : str.toCharArray()) {
            charCount[ch - 'a']++;
        }

        for (int i = 0; i < 26; i++) {
            char ch = (char) ('a' + i);
            int count = charCount[i];

            if (count % 2 == 0) {
                for (int j = 0; j < count / 2; j++) {
                    front.append(ch);
                    rear.insert(0, ch);
                }
            } else {
                oddCount++;
                middle.append(ch);
            }
        }

        if (oddCount > 1) {
            return "No Palindromic String";
        }

        return front.toString() + middle.toString() + rear.toString();
    }

    public static void main(String[] args) {
        String str = "level";
        System.out.println(findPalindromicString(str));
    }
}