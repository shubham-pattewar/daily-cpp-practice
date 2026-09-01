// Complete C++17 solution
// Day 81: Sort 0s, 1s and 2s

#include <iostream>
#include <vector>
long long merge(std::vector<int>&a,int l,int m,int r){std::vector<int>t;int i=l,j=m+1;long long inv=0;while(i<=m&&j<=r){if(a[i]<=a[j])t.push_back(a[i++]);else{t.push_back(a[j++]);inv+=m-i+1;}}while(i<=m)t.push_back(a[i++]);while(j<=r)t.push_back(a[j++]);for(int k=0;k<(int)t.size();k++)a[l+k]=t[k];return inv;}
long long solve(std::vector<int>&a,int l,int r){if(l>=r)return 0;int m=(l+r)/2;return solve(a,l,m)+solve(a,m+1,r)+merge(a,l,m,r);}
int main(){int n;std::cin>>n;std::vector<int>a(n);for(auto&x:a)std::cin>>x;std::cout<<solve(a,0,n-1)<<"\n";}
