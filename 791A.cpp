#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, res = 0;
    cin >> a >> b;

    while(a <= b) {
        a *= 3;
        b *= 2;
        res++;
    }

    cout << res;

    return 0;
}