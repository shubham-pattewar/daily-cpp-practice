// Complete C++17 solution
// Day 148: Merge K Sorted Arrays

#include <iostream>
#include <queue>
#include <vector>
struct C{char c;int f;bool operator<(C const&o)const{return f>o.f;}};
int main(){int n;std::cin>>n;std::priority_queue<C>q;for(int i=0;i<n;i++){char c;int f;std::cin>>c>>f;q.push({c,f});}std::cout<<"Huffman tree construction uses a min-heap.\n";while(q.size()>1){auto a=q.top();q.pop();auto b=q.top();q.pop();q.push({'*',a.f+b.f});}if(!q.empty())std::cout<<q.top().f<<"\n";}
