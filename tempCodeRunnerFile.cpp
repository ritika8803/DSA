#include <iostream>
#include <string>
using namespace std;

bool isValidSubsequence(string &a, string &b, int pos) {
    int n = a.size(), m = b.size();
    if (n - pos < m) return false;

    bool changed = false;
    int i = pos, j = 0;

    while (i < n && j < m) {
        if (a[i] == b[j]) {
            i++;
            j++;
        } else if (!changed && j > 0) {
            changed = true;
            j++;
        } else {
            i++;
        }
    }

    return (j == m || (j == m - 1 && !changed));
}

int firstOccurrence(string &a, string &b) {
    int n = a.size();
    for (int i = 0; i < n; i++) {
        if (isValidSubsequence(a, b, i)) {
            return i + 1; // converting to 1-based index
        }
    }
    return -1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        cout << firstOccurrence(a, b) << endl;
    }
    return 0;
}
