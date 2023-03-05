#include <bits/stdc++.h>

using namespace std;

int main() {
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n; cin >> n;
    
    vector<int> v;
    
    for(int i=0; i<n; i++){
        int greed; cin >> greed;
        v.push_back(greed);
    }
        
    sort(v.begin(),v.end());
    
    int result=0;
    
    while(!v.empty()){
        int iter=v.back();
        
        if(v.size()>=iter){
            while(iter--){
                v.pop_back();
            }
            result++;
        }
        else break;
    }
    
    cout << result;
    
}
