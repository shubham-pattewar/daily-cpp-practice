// Complete C++17 solution
// Day 110: Create and Traverse Singly Linked List

#include <iostream>
struct N{int x;N*next;N(int v):x(v),next(nullptr){}};
int main(){int n;std::cin>>n;N*head=nullptr,*tail=nullptr;for(int i=0;i<n;i++){int x;std::cin>>x;N*p=new N(x);if(!head)head=tail=p;else tail->next=p,tail=p;}for(N*p=head;p;p=p->next)std::cout<<p->x<<" ";std::cout<<"\n";}
