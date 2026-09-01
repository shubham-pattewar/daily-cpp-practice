// Complete C++17 solution
// Day 91: Pair Sum in Sorted Array

#include <iostream>
#include <vector>
int main(){int n;std::cin>>n;std::vector<int>a(n);for(auto&x:a)std::cin>>x;int t;std::cin>>t;int l=0,r=n-1;while(l<r){int s=a[l]+a[r];if(s==t){std::cout<<l<<" "<<r<<"\n";return 0;}if(s<t)l++;else r--;}std::cout<<-1<<"\n";}
