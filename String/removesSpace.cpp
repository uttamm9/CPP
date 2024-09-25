#include <iostream>
using namespace std;

void removeSpaces(string& str) {
    int count = 0;
    for (char ch : str) {
        if (ch != ' ') {
            str[count++] = ch;
        }
    }
    str.resize(count);
}

int main() {
    string input = "hello world";
    removeSpaces(input);
    cout << "String without spaces: \"" << input << "\"" << endl;
    return 0;
}
