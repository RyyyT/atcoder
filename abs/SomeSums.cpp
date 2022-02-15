#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    int A, B, sum, count=0;
    int N;
    string num;
    cin >> N >> A >> B;
    for(int i=1; i <= N; i++){
        num = to_string(i);
        sum = 0;
        rep(j, 0, num.length()){
            sum += num.at(j) - '0';
        }   
        if(A <= sum && sum <= B) {
            count += i; 
        }    
    }
    cout << count << endl;
    return 0;
}