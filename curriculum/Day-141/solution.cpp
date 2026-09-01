// Complete C++17 solution
// Day 141: Search in BST

#include <iostream>
struct N{int x;N*l,*r;N(int v):x(v),l(nullptr),r(nullptr){}};
N*ins(N*r,int x){if(!r)return new N(x);if(x<r->x)r->l=ins(r->l,x);else r->r=ins(r->r,x);return r;}
bool find(N*r,int x){while(r){if(r->x==x)return true;r=x<r->x?r->l:r->r;}return false;}
int main(){int n,x;std::cin>>n;N*r=nullptr;for(int i=0;i<n;i++){std::cin>>x;r=ins(r,x);}std::cin>>x;std::cout<<(find(r,x)?"Found":"Not Found")<<"\n";}
