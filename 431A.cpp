#include <bits/stdc++.h>

using namespace std;

int main(){
    int a[4], sum = 0, temp;
    string s;

    for(int i = 0; i < 4; i++)
        cin >> a[i];
    
    cin >> s;

    for(auto e : s){
        temp = e - '0';
        sum += a[temp - 1];
    }

    cout << sum;

    return 0;
}