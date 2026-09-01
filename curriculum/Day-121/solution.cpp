// Complete C++17 solution
// Day 121: Add Two Numbers as Linked Lists

#include <iostream>
struct N{int x;N*next;N(int v):x(v),next(nullptr){}};
N* add(N*a,N*b){N*d=new N(0),*t=d;int c=0;while(a||b||c){int s=c+(a?a->x:0)+(b?b->x:0);c=s/10;t->next=new N(s%10);t=t->next;if(a)a=a->next;if(b)b=b->next;}return d->next;}
int main(){int n,m;std::cin>>n>>m;N*a=nullptr,*b=nullptr;for(int i=0;i<n;i++){int x;std::cin>>x;N*p=new N(x);p->next=a;a=p;}for(int i=0;i<m;i++){int x;std::cin>>x;N*p=new N(x);p->next=b;b=p;}for(N*p=add(a,b);p;p=p->next)std::cout<<p->x;}
