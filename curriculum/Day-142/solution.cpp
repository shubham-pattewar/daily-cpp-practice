// Complete C++17 solution
// Day 142: Insert into BST

#include <iostream>
struct N{int x;N*l,*r;N(int v):x(v),l(nullptr),r(nullptr){}};
N*ins(N*r,int x){if(!r)return new N(x);if(x<r->x)r->l=ins(r->l,x);else r->r=ins(r->r,x);return r;}
void in(N*r){if(!r)return;in(r->l);std::cout<<r->x<<" ";in(r->r);}
int main(){int n;std::cin>>n;N*r=nullptr;for(int i=0,x;i<n;i++){std::cin>>x;r=ins(r,x);}int x;std::cin>>x;r=ins(r,x);in(r);}
