#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        char c;
        cin >> c;
        if (c == '1') {
            cout << (i % 2 ? "Aoki" : "Takahashi");
            break;
        }
    }
    return 0;
}