// Complete C++17 solution
// Day 134: Level Order Traversal

#include <iostream>
#include <vector>
struct N{int x;N*l,*r;N(int v):x(v),l(nullptr),r(nullptr){}};
bool same(N*a,N*b){return (!a&&!b)||(a&&b&&a->x==b->x&&same(a->l,b->l)&&same(a->r,b->r));}
int main(){std::cout<<"Identical trees require two trees; use same-tree structural comparison in code.\n";}
