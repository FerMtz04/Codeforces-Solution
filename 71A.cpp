#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;

    cin >> n;

    while(n--){
        string input;
        cin >> input;
        
        if(input.size() > 10){
            cout << input[0] << input.size() - 2 << input[input.size() - 1] << endl;
        } else {
            cout << input << endl;
        }
    }

    return 0;
}