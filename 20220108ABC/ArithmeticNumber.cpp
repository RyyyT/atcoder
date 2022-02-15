#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int ctoi(char c){
    if(c >= '0' && c <= '9'){
        return c - '0';
    }
    return 0;
}

int main() {
    int X;
    cin >> X;
    while(true){
        string num;
        int flag = 0;
        num = to_string(X);
        rep(i, 1, num.size()-1){
            int n;
            n = ctoi(num.at(i));
            if(n - ctoi(num.at(i-1)) != ctoi(num.at(i + 1)) - n){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            cout << X << endl;
            break;
        }else{
            X++;
        }
    }
}
