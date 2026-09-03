#include <bits/stdc++.h>
#include <cctype>

using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b;

    cin >> a >> b;

    for(int i = 0; i < a.size(); i++) {
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
    }

    if(a < b)   
        cout << -1;
    else if(a > b)
        cout << 1;
    else
        cout << 0;

    return 0;
}