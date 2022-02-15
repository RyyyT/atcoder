#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

bool judge(string s){
    int l = s.length();
    bool flag = true;
    rep(i, 0, l/2+1){
        if(s.at(i) != s.at(l-1-i)){
            return false;
        }
    }
    return true;
}

int main() {
    string s;
    cin >> s;
    int l = s.length();

    

    reverse(s.begin(), s.end());
    if(judge(s)) {
        cout << "Yes" << endl;
        return 0;
    }
    if(s.at(0) != 'a'){
        cout << "No" << endl;
        return 0;
    }
    int acount=0;
    rep(i, 0, l){
        if(s.at(i) == 'a') acount++;
        else{
            bool j = judge(s.substr(acount));
            if(j){
                cout << "Yes" << endl;
                return 0;
            }else{
                string fin = s.substr(acount);
                if(fin.at(fin.length()-1) != 'a'){
                    cout << "No" << endl;
                    return 0;
                }
                int finacount=0;
                reverse(fin.begin(), fin.end());
                rep(k, 0, fin.length()){
                    if(fin.at(k) == 'a') finacount++;
                    else{
                        if(finacount >= acount){
                            cout << "No" << endl;
                            return 0;
                        }else{
                            if(judge(fin.substr(finacount))){
                                cout << "Yes" << endl;
                                return 0;
                            }else{
                                cout << "No" << endl;
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }
    cout << "no answer" << endl;
    return 0;
}