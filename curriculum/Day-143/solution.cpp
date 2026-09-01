// Complete C++17 solution
// Day 143: Delete from BST

#include <iostream>
struct N{int x;N*l,*r;N(int v):x(v),l(nullptr),r(nullptr){}};
N*ins(N*r,int x){if(!r)return new N(x);if(x<r->x)r->l=ins(r->l,x);else r->r=ins(r->r,x);return r;}
N*del(N*r,int x){if(!r)return r;if(x<r->x)r->l=del(r->l,x);else if(x>r->x)r->r=del(r->r,x);else{if(!r->l)return r->r;if(!r->r)return r->l;N*p=r->r;while(p->l)p=p->l;r->x=p->x;r->r=del(r->r,p->x);}return r;}
void in(N*r){if(!r)return;in(r->l);std::cout<<r->x<<" ";in(r->r);}
int main(){int n;std::cin>>n;N*r=nullptr;for(int i=0,x;i<n;i++){std::cin>>x;r=ins(r,x);}int x;std::cin>>x;r=del(r,x);in(r);}
