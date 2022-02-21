#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

bool judge_kakko(string kakko){
    int l = kakko.length();
    int left_count = 0, right_count = 0;
    rep(i, 0, l){
        if(kakko.at(i) == '('){
            left_count++;
        }else if(kakko.at(i) == ')'){
            right_count++;
        }else{
            return false;
        }

        if(left_count < right_count){
            return false;
        }
    }
    if(left_count != right_count) return false;
    return true;
}

int main() {
    int N;
    cin >> N;
    if(N%2 != 0){
        return 0;
    }
    for(int i=0; i < (1 << N); i++){
        string kakko = "";
        for(int j = N-1; j >= 0; j--){
            if(i & (1 << j)){///iのjビット目が1
                kakko += ")";
            }else{
                kakko += "(";
            }
        }
        if(judge_kakko(kakko)) cout << kakko << endl;
    }
    return 0;
}