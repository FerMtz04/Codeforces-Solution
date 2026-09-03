#include <bits/stdc++.h>

using namespace std;

int main() {
    string s, t;
    int p = 0;

    cin >> s >> t;

    for(int i = 0; i < t.size(); i++) {
        if(s[p] == t[i])
            p++;
    }
    
    cout << p + 1;

    return 0;
}