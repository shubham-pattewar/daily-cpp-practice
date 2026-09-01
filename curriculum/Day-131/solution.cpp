// Complete C++17 solution
// Day 131: Deque Implementation

#include <iostream>
#include <vector>
#include <queue>
struct N{int x;N*l,*r;N(int v):x(v),l(nullptr),r(nullptr){}};
int main(){int n;std::cin>>n;if(!n)return 0;std::vector<N*>v(n);for(int i=0,x;i<n;i++){std::cin>>x;if(x!=-1)v[i]=new N(x);}for(int i=0;i<n;i++)if(v[i]){if(2*i+1<n)v[i]->l=v[2*i+1];if(2*i+2<n)v[i]->r=v[2*i+2];}std::queue<N*>q;q.push(v[0]);while(!q.empty()){int z=q.size();while(z--){N*p=q.front();q.pop();std::cout<<p->x<<" ";if(p->l)q.push(p->l);if(p->r)q.push(p->r);}std::cout<<"\n";}}
