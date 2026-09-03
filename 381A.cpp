#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, start = 0, sereja = 0, dima = 0, temp;
    bool turn = 1;
    cin >> n;

    int a[n], end = n - 1;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    while(n--){
        if(a[start] > a[end]){
            temp = a[start];
            start++;
        } else {
            temp = a[end];
            end--;
        }
    
        if(turn == 1){
            sereja += temp;
            turn = 0;
        } else {
            dima += temp;
            turn = 1;
        }
    }

    cout << sereja << " " << dima;

    return 0;
}