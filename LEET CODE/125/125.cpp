#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s = " ";

    // Convert to lowercase and filter alphanumeric characters
    string cleaned;
    for (char ch : s) {
        if (isalnum(ch)) {
            cleaned += tolower(ch);
        }
    }

    // If cleaned string is empty, it's a palindrome
    if (cleaned.empty()) {
        cout << true;
        return 0;
    }

    int len = cleaned.length();
    int mid = len / 2;

    string s1 = cleaned.substr(0, mid);
    string s2;

    if (len % 2 == 0)
        s2 = cleaned.substr(mid);
    else
        s2 = cleaned.substr(mid + 1);

    bool ret = true;
    int j = s2.length() - 1;
    for (int i = 0; i < s1.length(); i++) {
        if (s1[i] != s2[j]) {
            ret = false;
            break;
        }
        j--;
    }

    cout << ret;
}
