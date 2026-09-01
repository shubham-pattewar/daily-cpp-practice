// Complete C++17 solution
// Day 111: Insert at Beginning and End

#include <iostream>
#include <vector>
struct N{int x;N*next;N(int v):x(v),next(nullptr){}};
int main(){int n;std::cin>>n;N*h=nullptr,*t=nullptr;for(int i=0;i<n;i++){int x;std::cin>>x;N*p=new N(x);if(!h)h=t=p;else t->next=p,t=p;}int x;std::cin>>x;N*p=new N(x);p->next=h;h=p;std::cin>>x;p=new N(x);t->next=p;t=p;for(N*q=h;q;q=q->next)std::cout<<q->x<<" ";}
