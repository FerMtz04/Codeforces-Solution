#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a;
    set<char> s;

    cin >> a;

    for(int i = 0; i < a.size(); i++)
        s.insert(a[i]);
    
    if(s.size() % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";

    return 0;
}