#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, i;
    int flag = 0;
    string color;
    cin >> N;
    for(i=0; i<N; i++){
        cin >> color;
        if(color == "Y"){
            cout << "Four" << endl;
            flag = 1;
            break;
        }else{
            continue;
        }
    }
    if(flag == 0) cout << "Three" << endl;
}
