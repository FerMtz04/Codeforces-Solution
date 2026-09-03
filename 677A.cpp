#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, h, a, width = 0;
    cin >> n >> h;

    while(n--) {
        cin >> a;

        if (a > h)
            width += 2;
        else
            width++;
    }

    cout << width;
    return 0;
}