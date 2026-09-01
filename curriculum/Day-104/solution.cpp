// Complete C++17 solution
// Day 104: Generate All Subsequences

#include <iostream>
#include <vector>
void gen(const std::vector<int>&a,int i,std::vector<int>&cur){if(i==(int)a.size()){for(int x:cur)std::cout<<x<<" ";std::cout<<"\n";return;}gen(a,i+1,cur);cur.push_back(a[i]);gen(a,i+1,cur);cur.pop_back();}
int main(){int n;std::cin>>n;std::vector<int>a(n),c;for(auto&x:a)std::cin>>x;gen(a,0,c);}
