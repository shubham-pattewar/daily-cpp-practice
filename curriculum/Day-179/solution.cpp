// Complete C++17 solution
// Day 179: Merge K Sorted Linked Lists

#include <iostream>
#include <queue>
#include <vector>
struct N{int x;N*next;N(int v):x(v),next(nullptr){}};
struct C{bool operator()(N*a,N*b){return a->x>b->x;}};
int main(){int k;std::cin>>k;std::priority_queue<N*,std::vector<N*>,C>q;for(int i=0;i<k;i++){int n;std::cin>>n;N*h=nullptr,*t=nullptr;for(int j=0;j<n;j++){int x;std::cin>>x;N*p=new N(x);if(!h)h=t=p;else t->next=p,t=p;}if(h)q.push(h);}while(!q.empty()){N*p=q.top();q.pop();std::cout<<p->x<<" ";if(p->next)q.push(p->next);}std::cout<<"\n";}
