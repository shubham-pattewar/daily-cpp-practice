// Complete C++17 solution
// Day 28: Kadane's Maximum Subarray

#include <iostream>
#include <vector>
#include <algorithm>
int main(){int n;std::cin>>n;std::vector<long long>a(n);for(auto&x:a)std::cin>>x;long long best=a[0],cur=a[0];for(int i=1;i<n;i++){cur=std::max(a[i],cur+a[i]);best=std::max(best,cur);}std::cout<<best<<"\n";}
