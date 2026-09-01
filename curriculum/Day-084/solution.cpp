// Complete C++17 solution
// Day 84: Subarray Sum Equals K

#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>
int main(){int n;std::cin>>n;std::unordered_set<int>s;for(int i=0,x;i<n;i++){std::cin>>x;s.insert(x);}int best=0;for(int x:s)if(!s.count(x-1)){int y=x;while(s.count(y))y++;best=std::max(best,y-x);}std::cout<<best<<"\n";}
