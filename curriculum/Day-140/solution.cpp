// Complete C++17 solution
// Day 140: Lowest Common Ancestor

#include <iostream>
struct N{int x;N*l,*r;N(int v):x(v),l(nullptr),r(nullptr){}};
N* lca(N*r,int a,int b){if(!r||r->x==a||r->x==b)return r;N*x=lca(r->l,a,b),*y=lca(r->r,a,b);return x&&y?r:x?x:y;}
int main(){std::cout<<"LCA algorithm is implemented by lca(root,a,b).\n";}
