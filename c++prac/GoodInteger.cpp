#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, dig;
    cin >> n;
    dig = n / 1000;
    n = n % 1000;
    if(n/100 != dig) {
        dig = n/100;
        n = n % 100;
        if(n/10 == dig){
            if(n%10 == dig) cout << "Yes" << endl;
            else cout << "No" << endl;
        }else cout << "No" << endl;
    }else{
        n = n % 100;
        if(n/10 == dig) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}
