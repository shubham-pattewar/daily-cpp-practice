// Complete C++17 solution
// Day 115: Detect Cycle in Linked List

#include <iostream>
struct N{int x;N*next;N(int v):x(v),next(nullptr){}};
int main(){int n;std::cin>>n;N*h=nullptr,*t=nullptr;for(int i=0;i<n;i++){int x;std::cin>>x;N*p=new N(x);if(!h)h=t=p;else t->next=p,t=p;}N*a=h,*b=h;while(b&&b->next){a=a->next;b=b->next->next;if(a==b){std::cout<<"Cycle\n";return 0;}}std::cout<<"No Cycle\n";}
