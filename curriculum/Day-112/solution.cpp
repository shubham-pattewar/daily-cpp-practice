// Complete C++17 solution
// Day 112: Delete a Node

#include <iostream>
struct N{int x;N*next;N(int v):x(v),next(nullptr){}};
int main(){int n;std::cin>>n;N*h=nullptr,*t=nullptr;for(int i=0;i<n;i++){int x;std::cin>>x;N*p=new N(x);if(!h)h=t=p;else t->next=p,t=p;}int x;std::cin>>x;N**p=&h;while(*p&&(*p)->x!=x)p=&(*p)->next;if(*p)*p=(*p)->next;for(N*q=h;q;q=q->next)std::cout<<q->x<<" ";}
