#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> v,sor;
int range;
vector<pair<int,int>> answer;

int main() {
    cin >> n;
    
    for(int i=0; i<n; i++) {
        int x; cin>>x; v.push_back(x); sor.push_back(x);
    }
    
    sort(sor.begin(),sor.end());
    
    range = sor.front() + sor.back();
    
    for(int i=0; i<n; i++){
        int temp = abs(v[i] - (range/2));
        answer.push_back({temp,v[i]});
    }
    
    sort(answer.begin(),answer.end());
    
    cout << answer[0].second;
    
}
