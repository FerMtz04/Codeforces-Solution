#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    vector<int> a;
    
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }

    cin >> m;
    n = n - 1;

    for(int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;

        x = x - 1;
        if(x == 0) {
            a[1] += a[0] - y;
        }
        else if(x == n) {
            a[n - 1] += y - 1;
        }
        else {
            a[x - 1] += y - 1;
            a[x + 1] += a[x] - y;
        }

        a[x] = 0;
    }

    for(auto i : a) {
        cout << i << endl;
    }

    return 0;
}