// Complete C++17 solution
// Day 117: Merge Two Sorted Lists

#include <iostream>
struct N{int x;N*next;N(int v):x(v),next(nullptr){}};
N* merge(N*a,N*b){N d(0),*t=&d;while(a&&b){if(a->x<b->x)t->next=a,a=a->next;else t->next=b,b=b->next;t=t->next;}t->next=a?a:b;return d.next;}
int main(){int n,m;std::cin>>n>>m;N*a=nullptr,*ta=nullptr,*b=nullptr,*tb=nullptr;for(int i=0;i<n;i++){int x;std::cin>>x;N*p=new N(x);if(!a)a=ta=p;else ta->next=p,ta=p;}for(int i=0;i<m;i++){int x;std::cin>>x;N*p=new N(x);if(!b)b=tb=p;else tb->next=p,tb=p;}for(N*p=merge(a,b);p;p=p->next)std::cout<<p->x<<" ";}
