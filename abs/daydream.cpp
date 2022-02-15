#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    string words[4] = {"maerd", "remaerd", "esare", "resare"};
    bool flag = true;
    for(int i=0; i<s.size(); ){
        bool icchi = false;
        for(int j=0; j<4; ++j){
            string d = words[j];
            if(s.substr(i, d.size()) == d){
                i += d.size();
                icchi = true;
            }
        }
        if(!icchi){
            flag = false;
            break;
        }
    }
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}