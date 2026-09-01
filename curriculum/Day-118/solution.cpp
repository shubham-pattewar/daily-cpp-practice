// Complete C++17 solution
// Day 118: Remove Nth Node from End

#include <iostream>
struct N{int x;N*next;N(int v):x(v),next(nullptr){}};
int main(){int n,k;std::cin>>n>>k;N*h=nullptr,*t=nullptr;for(int i=0;i<n;i++){int x;std::cin>>x;N*p=new N(x);if(!h)h=t=p;else t->next=p,t=p;}N d(0);d.next=h;N*a=&d,*b=&d;for(int i=0;i<k;i++)b=b->next;while(b&&b->next)a=a->next,b=b->next;N*del=a->next;if(del)a->next=del->next;for(N*p=d.next;p;p=p->next)std::cout<<p->x<<" ";}
