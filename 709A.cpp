#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, b, d, sum = 0, ans = 0;

    cin >> n >> b >> d;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        
        if(x <= b)
            sum += x;
        if(sum > d) {
            ans++;
            sum = 0;
        }
    }

    cout << ans;

    return 0;
}