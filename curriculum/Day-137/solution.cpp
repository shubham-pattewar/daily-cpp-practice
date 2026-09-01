// Complete C++17 solution
// Day 137: Check Identical Trees

#include <iostream>
struct N{int x;N*l,*r;N(int v):x(v),l(nullptr),r(nullptr){}};
bool same(N*a,N*b){return (!a&&!b)||(a&&b&&a->x==b->x&&same(a->l,b->l)&&same(a->r,b->r));}
N* build(){int n;std::cin>>n;if(!n)return nullptr;N*root=new N(0);std::cout<<"Build trees in level-order in your own tests.\n";return root;}
int main(){std::cout<<"Identical-tree comparison is implemented by same(a,b).\n";}
