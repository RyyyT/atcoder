#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, a, max = 0, max_n;
    cin >> N;
    map<int, int> m;
    for(int i=0; i<N; i++){
        cin >> a;
        m[a]++;
    }
    for(auto n: m){
        int key = n.first;
        int value = n.second;
        if(value > max){
            max = value;
            max_n = key;
        }
    }
    cout << max_n << " " << max << endl;
}
