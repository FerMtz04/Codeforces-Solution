#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int l = 'a', r = 'z', count = 0, giro_derecha, giro_izquierda;

    cin >> s;
    s = "a" + s;

    for(int i = 1; i < s.size(); i++){
        if(s[i] >= s[i - 1]){
            giro_derecha = s[i] - s[i - 1];
            giro_izquierda = (s[i - 1] - l) + (r - s[i] + 1);
        } else {
            giro_derecha = (r - s[i - 1]) + (s[i] - l) + 1;
            giro_izquierda = s[i - 1] - s[i]; 
        }

    count += min(giro_derecha, giro_izquierda);
    }

    cout << endl << count;

    return 0;
}