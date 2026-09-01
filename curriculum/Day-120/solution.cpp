// Complete C++17 solution
// Day 120: Intersection of Two Linked Lists

#include <iostream>
struct N{int x;N*next;N(int v):x(v),next(nullptr){}};
int main(){int n,m;std::cin>>n>>m;N*a=nullptr,*ta=nullptr,*b=nullptr,*tb=nullptr;for(int i=0;i<n;i++){int x;std::cin>>x;N*p=new N(x);if(!a)a=ta=p;else ta->next=p,ta=p;}for(int i=0;i<m;i++){int x;std::cin>>x;N*p=new N(x);if(!b)b=tb=p;else tb->next=p,tb=p;}for(N*p=a;p;p=p->next)for(N*q=b;q;q=q->next)if(p==q){std::cout<<p->x<<"\n";return 0;}std::cout<<"No intersection\n";}
