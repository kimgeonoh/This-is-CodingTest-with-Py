#include <bits/stdc++.h>

using namespace std;

int main() {
    string s; cin>>s;
    
    long long result = 0;
    
    for(int i=0; i<s.size(); i++){
        if(s[i]<2) result+=s[i]-'0';
        else if(s[i]>=2&&result<2) result+=s[i]-'0';
        else if(s[i]>=2&&result>=2) result*=s[i]-'0';
    }
    
    cout << result;
}
