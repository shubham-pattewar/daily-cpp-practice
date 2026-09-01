// Complete C++17 solution
// Day 31: Leaders in an Array

#include <iostream>
#include <vector>
int main(){int n;std::cin>>n;std::vector<long long>a(n);for(auto&x:a)std::cin>>x;for(int i=n-1;i>=0;i--){bool ok=true;for(int j=i+1;j<n;j++)if(a[j]>=a[i])ok=false;if(ok)std::cout<<a[i]<<" ";}std::cout<<"\n";}
