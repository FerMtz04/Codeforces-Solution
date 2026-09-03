#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, uppercase, lowercase;
    int uppercase_count = 0, lowercase_count = 0;

    cin >> s;

    for(auto &c : s) {
        uppercase += toupper(c);
        lowercase += tolower(c);
        if(isupper(c))
            uppercase_count++;
        else
            lowercase_count++;
    }

    if(uppercase_count > lowercase_count)
        cout << uppercase;
    else
        cout << lowercase;

    return 0;
}