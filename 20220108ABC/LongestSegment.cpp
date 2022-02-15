#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    int N;
    cin >> N;
    vector<vector<int>> points(N, vector<int>(2));
    rep(i, 0, N){
        rep(j, 0, 2){
            cin >> points.at(i).at(j);
        }
    }
    vector<double> length(N*N);
    int index = 0;
    rep(i, 0, N){
        rep(j, 0, N){
            double x_l, y_l, l;
            x_l = points.at(i).at(0) - points.at(j).at(0);
            x_l = x_l * x_l;
            y_l = points.at(i).at(1) - points.at(j).at(1);
            y_l = y_l * y_l;
            l = sqrt(x_l + y_l);
            length.at(index) = l;
            index++;
        }
    }
    double maxlength = 0;
    rep(i, 0, N*N){
        if(length.at(i) > maxlength) maxlength = length.at(i);
    }
    cout << setprecision(11) << maxlength << endl;
}
