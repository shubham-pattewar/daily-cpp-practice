// Complete C++17 solution
// Day 119: Palindrome Linked List

#include <iostream>
#include <vector>
struct N{int x;N*next;N(int v):x(v),next(nullptr){}};
int main(){int n;std::cin>>n;N*h=nullptr,*t=nullptr;for(int i=0;i<n;i++){int x;std::cin>>x;N*p=new N(x);if(!h)h=t=p;else t->next=p,t=p;}std::vector<int>a;for(N*p=h;p;p=p->next)a.push_back(p->x);bool ok=true;for(int i=0,j=a.size()-1;i<j;i++,j--)if(a[i]!=a[j])ok=false;std::cout<<(ok?"Palindrome":"Not Palindrome")<<"\n";}
