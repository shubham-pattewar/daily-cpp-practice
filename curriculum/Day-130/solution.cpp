// Complete C++17 solution
// Day 130: Circular Queue

#include <iostream>
#include <queue>
struct N{int x;N*l,*r;N(int v):x(v),l(nullptr),r(nullptr){}};
void pre(N*p){if(!p)return;std::cout<<p->x<<" ";pre(p->l);pre(p->r);}
void in(N*p){if(!p)return;in(p->l);std::cout<<p->x<<" ";in(p->r);}
void post(N*p){if(!p)return;post(p->l);post(p->r);std::cout<<p->x<<" ";}
int main(){int n;std::cin>>n;/* input: n values, -1 means null in level order */std::vector<int>a(n);for(auto&x:a)std::cin>>x; if(n==0)return 0;std::vector<N*>v(n);for(int i=0;i<n;i++)if(a[i]!=-1)v[i]=new N(a[i]);for(int i=0;i<n;i++)if(v[i]){int l=2*i+1,r=2*i+2;if(l<n)v[i]->l=v[l];if(r<n)v[i]->r=v[r];}pre(v[0]);std::cout<<"\n";in(v[0]);std::cout<<"\n";post(v[0]);}
