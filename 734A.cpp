#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a = 0,b = 0;
    string s;

    cin >> n >> s;

    for(int i = 0; i < n; i++) {
        if(s[i] == 'A')
            a++;
        else
            b++;
    }

    if(a > b)
        cout << "Anton";
    else if(b > a)
        cout << "Danik";
    else
        cout << "Friendship";

    /*
    en complejidad temporal, es más eficiente O(n) que O(n log n) de la función sort
    
    sort(s.begin(), s.end());

    cout << s.length() << s.length() / 2 << s << endl;

    if(s.length() % 2 == 0 && s[s.length()/2] == 'D' && s[s.length()/2 - 1] == 'A')
        cout << "Friendship";
    else
        if(s[s.length()/2] == 'A')
            cout << "Anton";
        else
            cout << "Danik";*/

    return 0;
}