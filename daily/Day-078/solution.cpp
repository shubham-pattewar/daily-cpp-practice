// Complete C++17 solution
// Day 78: Merge Sort

#include <iostream>
#include <vector>
int part(std::vector<int>&a,int l,int r){int p=a[r],i=l;for(int j=l;j<r;j++)if(a[j]<=p)std::swap(a[i++],a[j]);std::swap(a[i],a[r]);return i;}
void qs(std::vector<int>&a,int l,int r){if(l<r){int p=part(a,l,r);qs(a,l,p-1);qs(a,p+1,r);}}
int main(){int n;std::cin>>n;std::vector<int>a(n);for(auto&x:a)std::cin>>x;qs(a,0,n-1);for(auto x:a)std::cout<<x<<" ";}
