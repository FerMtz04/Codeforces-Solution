#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, b, c, res = 0;

    cin >> n;

    while(n--) {
        cin >> a >> b >> c;
        res += (a + b + c > 1);
    }

    cout << res;

    return 0;
}