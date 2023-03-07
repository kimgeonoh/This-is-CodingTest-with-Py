#include <bits/stdc++.h>

using namespace std;

int main() {
    string s; cin >> s;
    int index = s.size()/2;
    
    int a=0,b=0;
    
    for(int i=0; i<index; i++){
        a += s[i]-'0';
    }
    
    for(int i=index; i<s.size(); i++){
        b += s[i]-'0';
    }
    
    (a==b)? cout << "LUCKY" : cout << "READY";
    
}
