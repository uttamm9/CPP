#include <bits/stdc++.h>
using namespace std;
bool isSubsequence(const std::string& s1, const std::string& s2) {
    int m = s1.length();
    int n = s2.length();
    int j = 0; // For index of s1 (or subsequence)

        for (int i = 0; i < n && j < m; i++) {
        if (s1[j] == s2[i]) {
            j++;
        }
    }

        return j == m;
}

int main() {
    std::string s1 = "abc";
    std::string s2 = "aebdc";

    if (isSubsequence(s1, s2)) {
        std::cout << "\"" << s1 << "\" is a subsequence of \"" << s2 << "\"" << std::endl;
    } else {
        std::cout << "\"" << s1 << "\" is not a subsequence of \"" << s2 << "\"" << std::endl;
    }

    return 0;
}
