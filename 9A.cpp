#include <bits/stdc++.h>

using namespace std;

int main() {
    int y, w, cnt;
    
    cin >> y >> w;

    cnt = 7 - max(y, w);

    cout << cnt / gcd(cnt, 6) << "/" << 6 / gcd(cnt, 6);
    
    return 0;
}