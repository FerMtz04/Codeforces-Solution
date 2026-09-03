#include <bits/stdc++.h>

using namespace std;

int main() {
    int x;
    unordered_set<int> s;
    
    for(int i = 0; i < 4; i++){
        cin >> x;
        s.insert(x);
    }

    cout << 4 - s.size();
    return 0;
}