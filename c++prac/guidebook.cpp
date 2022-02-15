#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, score, index;
    string city;
    cin >> N;
    vector<tuple<string, int, int>> stores;
    for(int i=1; i<=N; i++){
        tuple<string, int, int> s;
        cin >> city >> score;
        s = make_tuple(city, score*(-1), i);
        stores.push_back(s);
    }
    sort(stores.begin(), stores.end());
    for(auto a: stores){
        cout << get<2>(a) << endl;
    }
}
