#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "Hello World";

    int l = 0;
    int r = s.length() - 1;

    while (l < r) {
      
        swap(s[l], s[r]);
        l++;
        r--;
    }

    cout << s;
    return 0;
}