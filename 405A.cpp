#include <bits/stdc++.h>

using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    vector<int> a;

    cin >> n;

    while(n--){
        int x;
        cin >> x;
        a.push_back(x);
    }

    sort(a.begin(), a.end());

    for(int i = 0; i < a.size(); i++){
        cout << a[i] << " ";
    }

    return 0;
}