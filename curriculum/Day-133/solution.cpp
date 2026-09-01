// Complete C++17 solution
// Day 133: Binary Tree Traversals

#include <iostream>
#include <vector>
struct N{int x;N*l,*r;N(int v):x(v),l(nullptr),r(nullptr){}};
int cnt(N*p){return p?1+cnt(p->l)+cnt(p->r):0;}
int main(){int n;std::cin>>n;std::vector<N*>v(n);for(int i=0,x;i<n;i++){std::cin>>x;if(x!=-1)v[i]=new N(x);}for(int i=0;i<n;i++)if(v[i]){if(2*i+1<n)v[i]->l=v[2*i+1];if(2*i+2<n)v[i]->r=v[2*i+2];}std::cout<<cnt(v[0])<<"\n";}
