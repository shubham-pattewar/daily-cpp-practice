// Complete C++17 solution
// Day 153: Huffman Coding

#include <iostream>
#include <queue>
#include <vector>
int main(){int n;std::cin>>n;std::priority_queue<long long,std::vector<long long>,std::greater<long long>>q;for(int i=0,x;i<n;i++){std::cin>>x;q.push(x);}long long cost=0;while(q.size()>1){long long a=q.top();q.pop();long long b=q.top();q.pop();cost+=a+b;q.push(a+b);}std::cout<<cost<<"\n";}
