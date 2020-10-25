#include <vector>

using namespace std;


template <class TYPE> struct UnionFind
{
    vector<TYPE> par, siz;
    
    UnionFind(size_t n) : par(n, -1), siz(n, 1){}
    
    TYPE root(TYPE x){
        if(par[x] < 0)return x;
        else return par[x] = root(par[x]);
    }

    bool issame(TYPE x, TYPE y){return root(x) == root(y)}

    bool merge(TYPE x, TYPE y){
        x = root(x); y = root(y);
        if(x == y)return false;
        if(par[x] > par[y]) swap(x, y);
        par[x] += par[y];
        par[y] = x;
        return true;
    }

    TYPE size(TYPE x){
        return -par[root(x)];
    }
};
