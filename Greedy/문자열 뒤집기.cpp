#include <bits/stdc++.h>

using namespace std;

int main() {
    string s; cin>>s;
    
    int one=0, zero=0;
    
    for(int i=0; i<s.size(); i++){
        if(s[i]=='0'&&s[i+1]=='1') zero++;
        else if(s[i]=='1'&&s[i+1]=='0') one++;
    }
    
    if(s[s.size()]!=s[s.size()-1]) {
        if(s[s.size()]=='0') zero++;
        else one++;
    }
    
    cout << min(one,zero)<<'\n';
    
}
