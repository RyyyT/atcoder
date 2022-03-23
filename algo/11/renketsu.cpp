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
    int N, K, L;
    cin >> N >> K >> L;

    UnionFind road(N);
    UnionFind rail(N);

    rep(i, 0, K){
        int p, q;
        cin >> p >> q;
        p--; q--;
        road.unite(p, q);
    }
    rep(i, 0, L){
        int r, s;
        cin >> r >> s;
        r--; s--;
        rail.unite(r, s);
    }

    map<pair<int, int>, int> nums;
    rep(i, 0, N){
        int road_root = road.root(i);
        int rail_root = rail.root(i);
        nums[make_pair(road_root, rail_root)]++;
    }

    rep(i, 0, N){
        int road_root = road.root(i);
        int rail_root = rail.root(i);
        cout << nums[make_pair(road_root, rail_root)] << " ";
    }
    cout << endl;
    return 0;
}