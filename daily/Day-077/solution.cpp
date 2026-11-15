// Complete C++17 solution
// Day 77: Insertion Sort

#include <iostream>
#include <vector>
void merge(std::vector<int>&a,int l,int m,int r){std::vector<int>t;int i=l,j=m+1;while(i<=m&&j<=r)t.push_back(a[i]<a[j]?a[i++]:a[j++]);while(i<=m)t.push_back(a[i++]);while(j<=r)t.push_back(a[j++]);for(int k=0;k<(int)t.size();k++)a[l+k]=t[k];}
void ms(std::vector<int>&a,int l,int r){if(l>=r)return;int m=(l+r)/2;ms(a,l,m);ms(a,m+1,r);merge(a,l,m,r);}
int main(){int n;std::cin>>n;std::vector<int>a(n);for(auto&x:a)std::cin>>x;ms(a,0,n-1);for(auto x:a)std::cout<<x<<" ";}
