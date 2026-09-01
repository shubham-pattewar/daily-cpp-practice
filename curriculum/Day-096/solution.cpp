// Complete C++17 solution
// Day 96: First Negative in Every Window

#include <iostream>
#include <vector>
#include <queue>
int main(){int n,k;std::cin>>n>>k;std::vector<int>a(n);for(auto&x:a)std::cin>>x;std::deque<int>q;for(int i=0;i<n;i++){while(!q.empty()&&a[q.back()]>=a[i])q.pop_back();q.push_back(i);if(q.front()<=i-k)q.pop_front();if(i>=k-1)std::cout<<a[q.front()]<<" ";}std::cout<<"\n";}
