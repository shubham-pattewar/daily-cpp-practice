// Complete C++17 solution
// Day 93: Container With Most Water

#include <iostream>
#include <vector>
int main(){int n;std::cin>>n;std::vector<long long>a(n);for(auto&x:a)std::cin>>x;int l=0,r=n-1;long long best=0;while(l<r){best=std::max(best,1LL*(r-l)*std::min(a[l],a[r]));if(a[l]<a[r])l++;else r--;}std::cout<<best<<"\n";}
