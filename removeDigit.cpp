## We have a string s and an integer k. We need to remove k digits from the string to get the smallest possible number.
## Example: s = "10200" and k = 1 → Output: "200".”

#include <iostream>
#include <string>
#include <stack>
using namespace std;

string solve(string s,int k){
    string st;
    for(auto ch:s){
        while(!st.empty() && k && st.back()>ch)st.pop_back(),k--;
        st.push_back(ch);
    }
    while(k && !st.empty()){
        k--;
        st.pop_back();
    }
    int i=0;
    while(i<st.size() && st[i]=='0')i++;
    
    return st.substr(i);
    
    
}

int main()
{
    string s;
    int k;
    cin>>s;
    cin>>k;
    cout<<solve(s,k);
}
