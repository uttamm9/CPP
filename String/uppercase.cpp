#include <bits/stdc++.h>
using namespace std;

void toUpperCase(string& str) {
    for (char& ch : str) {
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - ('a' - 'A');    
                 }
    }
}

int main() {
    string input = "laptop";
    toUpperCase(input);
    cout << "Uppercase string: " << input << endl;
    return 0;
}
