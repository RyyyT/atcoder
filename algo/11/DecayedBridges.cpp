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
    int64_t N, M;
    cin >> N >> M;

    vector<int> a(M), b(M);
    vector<int64_t> ans(M);

    rep(i, 0, M){
        cin >> a[i] >> b[i];
        a[i]--; b[i]--;
    }

    UnionFind uf(N);
    ans[M-1] = N * (N-1) / 2;

    for(int i = M-1; i > 0; i--){
        if(uf.issame(a[i], b[i])){
            ans[i-1] = ans[i];
            continue;
        }
        int64_t as = uf.size(a[i]), bs = uf.size(b[i]);
        uf.unite(a[i], b[i]);
        ans[i-1] = ans[i] - (as*bs);
    }

    rep(i, 0, M){
        cout << ans[i] << endl;
    }
    return 0;
}