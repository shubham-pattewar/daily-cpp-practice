// Complete C++17 solution
// Day 52: Valid Parentheses

#include <iostream>
#include <stack>
#include <string>
int main(){std::string s;std::cin>>s;std::stack<char>st;for(char c:s){if(c=='('||c=='['||c=='{')st.push(c);else{if(st.empty()||(c==')'&&st.top()!='(')||(c==']'&&st.top()!='[')||(c=='}'&&st.top()!='{')){std::cout<<"Invalid\n";return 0;}st.pop();}}std::cout<<(st.empty()?"Valid":"Invalid")<<"\n";}
