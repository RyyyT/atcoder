#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int a, b, c;
const double PI = acos(-1.0);
double f(double t){
    return a*t + b*sin(c*t*PI);
}

int main() {
    cin >> a >> b >> c;
    double left = 0, right = 200;
    double ths = pow(10, -7);
    while(right - left >= ths){
        double mid = left + (right - left)/2;
        if(f(mid) == 100) {
            printf("%.15lf\n", mid);
            return 0;
        }
        if(f(mid) < 100) left = mid;
        else right = mid;
    }
    printf("%.15lf\n", left);
    return 0;
}