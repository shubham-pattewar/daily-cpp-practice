// Complete C++17 solution
// Day 113: Reverse Linked List

#include <iostream>
struct N{int x;N*next;N(int v):x(v),next(nullptr){}};
int main(){int n;std::cin>>n;N*h=nullptr;for(int i=0;i<n;i++){int x;std::cin>>x;N*p=new N(x);p->next=h;h=p;}N*r=nullptr;while(h){N*t=h->next;h->next=r;r=h;h=t;}for(;r;r=r->next)std::cout<<r->x<<" ";}
