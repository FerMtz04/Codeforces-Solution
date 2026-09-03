#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int value, res;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cin >> value;
            if(value == 1) {
                res = abs(i - 2) + abs(j - 2);
            }
        }
    }

    cout << res;

    return 0;
}