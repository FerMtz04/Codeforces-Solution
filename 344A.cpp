#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, temp, a, cont = 0;

    cin >> n;

    while(n--){
        cin >> a;
        if(temp != a)
            cont++;
        temp = a;
    }

    cout << cont;

    return 0;
}