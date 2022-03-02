#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

vector<int> ok(3, 0);

int count753(int n){
    if(n <= 356) return 0;
    else{
        rep(i, 0, 3) ok.at(i) = 0;
        string num = to_string(n);
        rep(i, 0, num.length()){
            if(num[i] == '7') ok[0] = 1;
            else if(num[i] == '5') ok[1] = 1;
            else if(num[i] == '3') ok[2] = 1;
            else{
                return count753(n-1);
            }
        }
        rep(i, 0, 3){
            if(ok[i] == 0){
                return count753(n-1);
            }
        }
        return count753(n-1) + 1;
    }
}

int main() {
    int N;
    cin >> N;
    cout << count753(N) << endl;
    return 0;
}