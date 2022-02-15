#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A;
  cin >> N >> A;
  int i;
  string op;
  int b;
  // ここにプログラムを追記
  for(i = 0; i < N; i++){
    cin >> op >> b;
    if(op == "+") A += b;
    else if(op == "-") A -= b;
    else if(op == "*") A *= b;
    else if(op == "/"){
        if(b == 0) {
            cout << "error" << endl;
            break;
        }
        else A /= b;
    }
    cout << i+1 << ":" << A << endl;
  }
}
