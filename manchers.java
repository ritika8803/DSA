public class manchers {
    public static void main(String[] args) {
        String s = "your_input_string";
        int n = s.length();
        char t[] = new char[n * 2 + 3];
        t[0] = '#';
        t[n * 2 + 2] = '@';

        for (int i = 0; i < s.length(); i++) {
            t[2 * i + 1] = '#';
            t[2 * i + 2] = s.charAt(i);
        }

        int P[] = new int[n * 2 + 3];
        for (int i = 1; i < t.length; i++) {
            while (t[i + (1 + P[i])] == t[i - (1 + P[i])]) {
                P[i]++;
            }
        }
        
        // Rest of your code...
    }
}

