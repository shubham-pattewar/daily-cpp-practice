// Complete C++17 solution
// Day 76: Selection Sort

#include <iostream>
#include <vector>
int main(){int n;std::cin>>n;std::vector<int>a(n);for(auto&x:a)std::cin>>x;for(int i=1;i<n;i++){int x=a[i],j=i-1;while(j>=0&&a[j]>x)a[j+1]=a[j--];a[j+1]=x;}for(auto x:a)std::cout<<x<<" ";}
