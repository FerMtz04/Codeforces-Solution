#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(22);

    int n, m, a;
    cin >> n >> m >> a;

    cout << ceil((double) n / a) * ceil((double) m / a);

    return 0;
}