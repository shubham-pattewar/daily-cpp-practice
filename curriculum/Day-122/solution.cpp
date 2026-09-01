// Complete C++17 solution
// Day 122: Implement Stack Using Array

#include <iostream>
#include <vector>
class Stack{std::vector<int>a;public:void push(int x){a.push_back(x);}void pop(){if(!a.empty())a.pop_back();}int top(){return a.back();}};
int main(){int n;std::cin>>n;Stack s;while(n--){int op,x;std::cin>>op;if(op==1){std::cin>>x;s.push(x);}else if(op==2)s.pop();else std::cout<<s.top()<<" ";}}
