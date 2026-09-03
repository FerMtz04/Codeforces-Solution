#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, p = 0, temp, crimes = 0;
    cin >> n;

    while(n--){
        cin >> temp;
        if(temp != -1)
            p += temp;
        else if(p == 0)
            crimes++;
        else
            p--;
    }

    cout << crimes;

    return 0;   
}