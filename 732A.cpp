#include <bits/stdc++.h>

using namespace std;

int main (){
    int k, r, count = 1, temp_k;

    cin >> k >> r;
    temp_k = k;

    while(true){
        if(temp_k % 10 != 0 && temp_k % 10 != r){
            count++;
            temp_k += k;
        }
        else {
            break;
        }
    }

    cout << count;

    return 0;
}