#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

//Union-Find
struct UnionFind{
    vector<int> par, siz;

    UnionFind(int n) : par(n, -1), siz(n, 1){}

    int root(int x){
        if(par[x] == -1) return x;
        else return par[x] = root(par[x]);
    }

    bool issame(int x, int y){
        return root(x) == root(y);
    }

    bool unite(int x, int y){
        x = root(x); y = root(y);
        if(x == y) return false;
        if(siz[x] < siz[y]) swap(x, y);
        par[y] = x;
        siz[x] += siz[y];
        return true;
    }

    int size(int x){
        return siz[root(x)];
    }
};

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> a(M), b(M);
    int ans = 0;

    rep(i, 0, M){
        cin >> a[i] >> b[i];
        a[i]--; b[i]--;
    }

    rep(i, 0, M){
        UnionFind uf(N);
        rep(j, 0, M){
            if(j == i) continue;
            else{
                uf.unite(a[j], b[j]);
            }
        }
        int res = 0;
        rep(k, 0, N){
            if(uf.root(k) == k) res++;
        }
        if(res != 1) ans++;
    }
    cout << ans << endl;
    return 0;
}