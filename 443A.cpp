#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string input;
    unordered_set<char> unique_chars;

    getline(cin, input);

    for(int i = 1; i < input.size(); i += 3) {
        if(input[i] == '}') {
            break;
        }
        unique_chars.insert(input[i]);
    }

    cout << unique_chars.size();

    return 0;
}