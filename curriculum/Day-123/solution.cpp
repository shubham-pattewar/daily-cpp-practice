// Complete C++17 solution
// Day 123: Implement Stack Using Linked List

#include <iostream>
struct N{int x;N*next;N(int v):x(v),next(nullptr){}};
int main(){int n;std::cin>>n;N*h=nullptr;while(n--){int op,x;std::cin>>op;if(op==1){std::cin>>x;N*p=new N(x);p->next=h;h=p;}else if(h)h=h->next;else continue;if(op==3&&h)std::cout<<h->x<<" ";}}
